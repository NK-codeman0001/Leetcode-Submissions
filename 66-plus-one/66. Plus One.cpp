class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int c=0;
        digits[n-1]++;
        for(int i=n-1;i>=0;i--){
            int x=digits[i]+c;
            c=x/10;
            digits[i]=x%10;
            if(c==0) break;
        }
        if(c>0) {
        digits.push_back(c);
        for(int i=n;i>0;i--) swap(digits[i],digits[i-1]);
        }
        return digits;
    }
};