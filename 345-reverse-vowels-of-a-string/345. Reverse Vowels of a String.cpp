class Solution {
public:
    bool check(char c){
        string v={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<10;i++){
            if(v[i]==c) return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        stack <char> st;
        for(int i=0;i<s.size();i++){
            if(check(s[i])){
                st.push(s[i]);
                s[i]='_';
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='_'){
                s[i]=st.top();
                st.pop();
            }
        }
        return s;
        }
};