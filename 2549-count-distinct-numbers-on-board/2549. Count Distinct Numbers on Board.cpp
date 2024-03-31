class Solution {
public:
    int distinctIntegers(int n) {
        unordered_set <int>  arr;
        while(n>0){
            for(int z=1;z<=n;z++){
                if(n%z==1){
                    arr.insert(z);
                }
            }
            n--;
        }
        return arr.size()+1;
    }
};