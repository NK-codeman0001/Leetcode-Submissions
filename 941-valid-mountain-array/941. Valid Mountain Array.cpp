class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int p=n-1;
        for(int i=1;i<n-1;i++){
            if(arr[i-1]<=arr[i]<=arr[i+1]) p=i;
        }
        for(int i=0;i<p;i++){
            if(arr[i]>=arr[i+1]) return false;
        }
        for(int i=n-1;i>p;i--){
            if(arr[i]>=arr[i-1]) return false;
        }
        return true;
    }
};