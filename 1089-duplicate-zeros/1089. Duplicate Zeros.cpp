class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==0){
                shift(arr,i+1);
                arr[i+1]=0;
                i++;
            }
        }
    }
    
    void shift(vector<int>& arr, int left){
        for(int i=arr.size()-2; i >=left ;i--){
            arr[i+1]=arr[i];
        }
    }
};