class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int sumL=0,sumR=0;
        for(int i:nums){
           sumR+=i;
       }
        for(int i=0;i<nums.size();i++){
            sumR-=nums[i];
            if(sumR==sumL) return i;
            sumL+=nums[i];
        }
        return -1;
    }
};