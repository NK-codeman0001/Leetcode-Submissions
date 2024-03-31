#include <deque>
#include <vector>

class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        std::deque<int> maxx;
        std::deque<int> minn;
        long long l = 0;
        long long ans = 0;

        for (long long i = 0; i < nums.size(); i++) {
            while (!maxx.empty() && nums[maxx.back()] < nums[i]) {
                maxx.pop_back();
            }
            maxx.push_back(i);

            while (!minn.empty() && nums[minn.back()] > nums[i]) {
                minn.pop_back();
            }
            minn.push_back(i);

            while (nums[maxx.front()] - nums[minn.front()] > 2) {
                if (maxx.front() < minn.front()) {
                    l = maxx.front() + 1;
                    maxx.pop_front();
                } else {
                    l = minn.front() + 1;
                    minn.pop_front();
                }
            }

            ans += i - l + 1;
        }
        return ans;
    }
};