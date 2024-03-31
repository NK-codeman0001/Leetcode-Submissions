class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();
        for(int i=0;i<size-1;i++){
            int max=arr[i+1];
            for(int j=i+2;j<size;j++){
                if(max<arr[j])
                    max=arr[j];
            }
            arr[i]=max;
        }
        arr[size-1]=-1;
        return arr;
    }
};