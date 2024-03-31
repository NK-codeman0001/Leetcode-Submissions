class Solution {
public:
    long long int mySqrt(int x) {
        long long int l=0,h=x,mid,ans;
        mid= l+ (h-l)/2;
        while(l<=h){
            if(mid*mid==x) return mid;
            else if(mid*mid<x){
                ans=mid; //important point 
                l=mid+1;

            }
            else if(mid*mid>x) h=mid-1;
            mid= l+ (h-l)/2;
        }
        return ans;
        
    }
};