class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid;
        mid=l+ (r-l)/2;
        while(l<=r){
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) l=mid+1;
            else if(nums[mid]>target) r=mid-1;
            mid=l+ (r-l)/2;
        }
        return mid;
        
    }
};