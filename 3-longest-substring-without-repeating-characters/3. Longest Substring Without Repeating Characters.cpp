class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char,int> mp;
        int l=0,r=0,ans=0;
        int n=s.size();
        while(r<n){
            if(mp.find(s[r])!=mp.end()){
                ans=max(ans,r-l);
                l=max(mp[s[r]]+1,l);
                mp[s[r]]=r;
            }
            else{
                mp[s[r]]=r;
            }
            r++;
        }
        ans=max(ans,r-l);
        return ans;
    }
};