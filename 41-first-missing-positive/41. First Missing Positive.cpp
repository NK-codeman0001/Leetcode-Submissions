class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    int maxval=0;
        
    for(int j=0;j<nums.size();j++){
            if(maxval<nums[j]) maxval=nums[j];
        }
        
    int size=maxval+1;
    int map[size];
    
    for(int i=0;i<size;i++){
            map[i]=0;
        } 
        
    for(int j=0;j<nums.size();j++){
            if(nums[j]>0) map[nums[j]]=1;
        }
        
    for(int i=1;i<size;i++){
            if(map[i]==0) return i;
        }
        
        return maxval+1;
    }
};