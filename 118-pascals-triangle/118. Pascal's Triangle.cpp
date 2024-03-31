class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows); // important to mention 1st dimension
        for(int i=0;i<numRows;i++){
            ans[i].resize(i+1); // Most important part to resize the 2d vector
            ans[i][0]=ans[i][i]=1;
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }
    //
    // int nCr(int n,int r){

    //     int ans= fact(n,r)/fact(r,1);
    //     return ans;
    // }
    // int fact(int n,int r=1){
    //     if(n<=r) return r;
    //     return n*fact(n-1);
    // }
};