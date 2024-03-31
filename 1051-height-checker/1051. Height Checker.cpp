class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> nums(heights);
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i!=nums.size();i++)
            if(nums[i]!=heights[i])
                count++;
        return count;
    }
};