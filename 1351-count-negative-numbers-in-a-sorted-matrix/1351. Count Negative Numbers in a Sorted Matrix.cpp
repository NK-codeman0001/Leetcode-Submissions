class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans =0;
        
        for(auto &a: grid){
            ans+= getAns(a);
        }
        
        return ans;
    }
    
    int getAns(vector<int> &a){
        if(a[0]<0) return a.size();
        if(a[a.size()-1] >= 0) return 0;
        int s = 0;
        int e = a.size()-1;
        int ind = 0;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(a[mid]<0){
                ind = mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return a.size()-ind;
    }
};