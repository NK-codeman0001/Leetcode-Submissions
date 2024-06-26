class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int ans =0;
        int l=0,r=n-1, lmax=0,rmax=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(lmax<=height[l]) lmax = height[l];
                else ans += lmax -height[l];
                l++;
            }
            else{
                if(rmax<=height[r]) rmax=height[r];
                else ans+= rmax -height[r];
                r--;
            }
        }
        return ans;
    }
};