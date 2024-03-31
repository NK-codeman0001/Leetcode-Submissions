class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map <int,int> mp;
        // if(nums.size()<2) return nums[0]==k;
        int ans=0;
        int sum=0;
        mp[0]++;
        for(int i=0;i< nums.size();i++){
            sum+=nums[i];
            int r=sum%k;
            
            if(r<0){
                r=k+r;
            }
            if(mp[r]) ans+=mp[r];
            mp[r]++;
        }
        return ans;
    }
};