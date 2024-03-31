class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum=0,a=1,b=0;
        for(int i=0;i<s.size();i++){
            if((sum+widths[s[i]-'a'])<=100)sum+=widths[s[i]-'a'];
            else{
                a++;
                sum=widths[s[i]-'a'];
            }
        }
        // int a=sum/100, b=sum%100;
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(sum);
        return ans;
    }
};