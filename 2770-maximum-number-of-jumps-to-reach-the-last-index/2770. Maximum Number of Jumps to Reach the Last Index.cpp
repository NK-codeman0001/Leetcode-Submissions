class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int s = nums.size();
        vector<int> dp_vec(s, -1);
        dp_vec[0] = 0;
        
        for (int i = 1; i < s; i++) {
            for (int j = 0; j < i; j++) {
                if (abs(nums[i] - nums[j]) <= target && dp_vec[j] != -1) {
                    if (dp_vec[i] == -1) {
                        dp_vec[i] = dp_vec[j] + 1;
                    } else {
                        dp_vec[i] = max(dp_vec[i], dp_vec[j] + 1);
                    }
                }
            }
        }
        
        return dp_vec[s - 1];
    }
};