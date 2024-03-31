class Solution {
public:
    bool isSubsequence(string s, string t) {
       int i=0,j=0,n=s.size();
        while(j<t.size() && i<n){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==n;
        
    }
};