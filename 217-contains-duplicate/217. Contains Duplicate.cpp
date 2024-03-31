class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_map <int,bool> mp;
        for(auto it : nums){
            if(mp[it]) return true;
            mp[it]=true;
        }
        return false;
    }
};