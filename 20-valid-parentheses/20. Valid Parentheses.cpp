class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int i=0;
        while(s[i]){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                char temp = st.top();
                st.pop();
                if(s[i]==')'&& temp!='(') return false;
                else if(s[i]=='}' && temp!='{') return false;
                else if(s[i]==']'&& temp!='[') return false;
            }
            i++;
        }
        
        return st.empty()?true:false;
    }
};