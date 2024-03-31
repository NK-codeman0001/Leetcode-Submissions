class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1) return false;
        if(n==1) return true;
        int k=n;
        while(k>1){
            if(k%2==1) return false;
            k/=2;
        }
        return true;
    }
};