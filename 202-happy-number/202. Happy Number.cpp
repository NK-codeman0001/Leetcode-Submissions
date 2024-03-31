class Solution {
public:
    int digSum(int n){
        int sum=0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int tmp=n;
        while(true){
            if(tmp==1) return true;
            if(tmp==89) return false;
            tmp=digSum(tmp);
        }
    }
};