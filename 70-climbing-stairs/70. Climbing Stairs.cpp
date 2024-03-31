class Solution {
public:
    int dp[46]={1,1};
    int climbStairs(int n) {
        if(n<2) return n;
        if(dp[n-1]&&dp[n-2]){
            dp[n]=dp[n-1]+dp[n-2];
            return dp[n];
        }
        dp[n]=climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
};