class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int f=INT_MAX;
       int n=nums.size();
       int l=n;
       for(int i=0;i<n-2;i++){
           if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
               nums[i]=f;
               l--;
           }
       }
       sort(nums.begin(),nums.end()); 
       return l;
    }
    
};