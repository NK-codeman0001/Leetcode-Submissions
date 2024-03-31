class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1=0;
        int ones=0;
        for(auto i = nums.begin(); i!=nums.end();i++){
            if(*i==0)
                ones=0;
            else{
                ones++;
                max1=ones>max1?ones:max1;
            }
        }
        return max1;
        
    }
};