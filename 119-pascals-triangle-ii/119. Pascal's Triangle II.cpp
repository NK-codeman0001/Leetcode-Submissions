class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int> ans; // important to mention 1st dimension
        long long int temp;
        for(int i=0;i<rowIndex+1;i++){
            temp= nCr(rowIndex,i);
            ans.push_back(temp);
        }
        return ans;
    }
    
    long long int nCr(int n,int r){

        long long int ans= fact(n)/(fact(r)*fact(n-r));
        return ans;
    }
    long long int fact(int n,int r=1){
        if(n==r-1) return r-1||1;
        return n*fact(n-1);
    } 
};