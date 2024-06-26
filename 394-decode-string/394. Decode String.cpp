class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return dfs(s, i);
    }
    string dfs(string s, int& i){
        string res = "";
        if(i >= s.size()) return res;
        while(i < s.size()){
            if(isalpha(s[i])) res += s[i];
            else if(s[i] == ']') return res;
            else if(isdigit(s[i])){
                int loops = 0;
                while(isdigit(s[i])) loops = loops * 10 + s[i++] - '0';
                string pat = dfs(s, ++i);
                for(int j = 0; j < loops; ++j) res += pat;
            }
            ++i;
        }
        return res;
    }
};