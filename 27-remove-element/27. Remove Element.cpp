class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n,l,f;
        n=nums.size();
        l=n;
        f=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                nums[i]=f;
                l--;
            }
        }
        sort(nums.begin(),nums.end());
        return l;
    }
};