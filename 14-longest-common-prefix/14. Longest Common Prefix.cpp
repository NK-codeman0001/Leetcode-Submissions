class Solution {
public:
    string check(string s1,string s2){
       int n1=s1.size();
        int n2=s2.size();
        if(n1==0 || n2==0 ) return "";
        if(n1>n2) swap(s1,s2);
        string ans="";
        for(int i=0;i<n1;i++){
            if(s1[i]==s2[i]) ans+=s1[i];
            else return ans;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int k= strs.size();
        string ans=strs[0];
        for(int i=1;i<k;i++){
            ans=check(ans,strs[i]);
        }
        return ans;
    }
};