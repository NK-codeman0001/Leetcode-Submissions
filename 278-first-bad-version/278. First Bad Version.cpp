// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans = INT_MAX;
        int l=1,r=n,mid;
        mid=l+ (r-l)/2;
        while(l<=r){
            if(isBadVersion(mid)){
                ans=min(mid,ans);
                r=mid-1;
            }
            else l=mid+1;
            mid=l+ (r-l)/2;
        }
        return ans;
    }
};