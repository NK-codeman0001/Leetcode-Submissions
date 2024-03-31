class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        // reverse(num.begin(),num.end());
        vector<int> ans;
        int i=num.size()-1;
        while(i>=0 || k>0){
            if(i>=0){
                int t = (k+num[i])%10;
                ans.push_back(t);
                k=(k+num[i])/10;
            }
            else{
                int t = k%10;
                ans.push_back(t);
                k/=10;
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};