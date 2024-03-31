class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP=prices[0],maxV=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            minP=min(minP,prices[i]);
            maxV=max(maxV,prices[i]-minP);
        }
        return maxV;
    }
};