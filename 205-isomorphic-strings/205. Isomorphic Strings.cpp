class Solution {
public:
    bool isIsomorphic(string s, string t) {
        return helper(s,t) && helper(t,s);
    }
    bool helper(string s, string t) {
       int n1=s.size(),n2=t.size();
        map <char,char> mp;
        for(int i=0;i<n1;i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return false;
            }
            else{
                mp[s[i]]=t[i];
            }
        }
        return true;
    }
    
};