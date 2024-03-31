class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> flag(26,0);
        for(int i=0;i<s.size();i++){
            flag[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(flag[s[i]-'a']==1) return i;
        }
        return -1;
    }
};