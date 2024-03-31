class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
         int l = 0;
        int m = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0 && nums[i] <= threshold) {
                l = 1;
                for (int ri = i + 1; ri < nums.size(); ri++) {
                    if (nums[ri] % 2 != nums[ri - 1] % 2 && nums[ri] <= threshold && nums[ri - 1] <= threshold) {
                        l += 1;
                    } else {
                        break;
                    }
                }
                m = max(m, l);
            }
        }

        return m;
    }
};