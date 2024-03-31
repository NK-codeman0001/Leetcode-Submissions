class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int count0=0;
        for(int i=0;i<len;i++)
            if(nums[i]==0)
                count0++;
        if(len<2 || len==count0)
            return;
        for(int i=0;i<len-count0;i++){
            if(nums[i]==0){
                shift(nums,i);
                i--;
            }
        }
            
    }
    void shift(vector<int>& nums,int pos){
        int len=nums.size();
        if(pos<len){
            for(int i=pos;i<len-1;i++){
                nums[i]=nums[i+1];
        }

        }
        nums[len-1]=0;
    }
};