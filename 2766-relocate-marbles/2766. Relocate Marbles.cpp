class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        sort(nums.begin(), nums.end());
        
        unordered_map<int, int> mp ;
        int s1 = nums.size();
        for (int i = 0; i < s1; i++){
            mp[nums[i]] = 1;
        }
        
        int s2 = moveFrom.size();
        for (int i = 0; i < s2; i++){
            if (mp.find(moveFrom[i]) != mp.end()) {
                // found
                mp.erase(moveFrom[i]);
                mp[moveTo[i]] = 1;
            }
        }
        
        vector<int> marble;
        for (auto it: mp){
            marble.push_back(it.first);
        }
        
        sort(marble.begin(), marble.end());
        return marble;
    }
};