class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int maxL=-1;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int c=1;
            int f=0;
            for(int j=i+1;j<n;j++)
            {
                if(f==0 and nums[j]==nums[i]+1)
                    c++,f=1;
                else if(f==1 and nums[i]==nums[j])
                    c++,f=0;
                else
                    break;
            }
            if(c>1)
                maxL=max(maxL,c);
        }
        return maxL;
    }
};