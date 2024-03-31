class Solution {
public:
    int arrangeCoins(int n) {
        int sum=0,i=1;
        while(sum<=n){
            i++;
            sum=i*(i-1)/2;    
        }
        return sum==n?i-1:i-2;
    }
};