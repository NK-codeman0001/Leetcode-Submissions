class Solution {
public:
     void gPrimes(int n, vector<bool> &isPrime) {
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i] == true) {
            // Update all multiples of p as non-prime
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
  }
    
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> isPrime(n + 1, true);
        isPrime[1]=false;
        isPrime[0]=false;
        gPrimes(n, isPrime);
        vector<vector<int>> sol;
        for(int i=2;i<n; i++){
            if(isPrime[i] && isPrime[n-i]){
                vector<int> tmp;
                tmp.push_back(i);
                tmp.push_back(n-i);
                isPrime[i] = false;
                isPrime[n-i] = false;
                sol.push_back(tmp);
        }
        
        }
        return sol;
    }
};