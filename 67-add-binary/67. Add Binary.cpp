class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int sum=0,c=0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0 || j>=0){
            sum=c;
            if(i>=0) sum+=a[i] - '0';
            if(j>=0) sum+=b[j] - '0';
            c=sum/2;
            sum%=2;
            ans+=to_string(sum);
            i--;j--;
        }
        if(c!=0)ans+=to_string(c);
        reverse(ans.begin(),ans.end());
        return ans;
    
    }
};