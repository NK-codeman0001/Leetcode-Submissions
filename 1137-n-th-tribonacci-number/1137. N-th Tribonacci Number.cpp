class Solution {
public:
    int dp[38]={0,1,1,0};
    int tribonacci(int n) {
        if(n<2) return n;
        else if(n==2) return 1;
        else if(dp[n-1]&&dp[n-2]&&dp[n-3]){
            dp[n]=dp[n-1]+dp[n-2]+dp[n-3];
            return dp[n];
        }
        
        dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        return dp[n];
        
    }
};