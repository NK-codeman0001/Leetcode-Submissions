class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int, int> mp;
        int mx = 0;
        for (int i : arr) {
            mp[i] = mp[i - difference] + 1;
            mx = max(mp[i], mx);
        }
        return mx;
    }
};