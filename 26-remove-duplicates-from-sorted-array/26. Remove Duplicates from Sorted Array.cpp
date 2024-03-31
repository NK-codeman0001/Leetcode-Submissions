class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]) {nums[i]=101;ans++;}
        }
        sort(nums.begin(),nums.end());
        return n-ans;
    }
};