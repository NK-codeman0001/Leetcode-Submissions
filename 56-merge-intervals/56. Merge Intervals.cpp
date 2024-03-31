class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector <vector<int>> ans;
        vector <int>temp;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        if(n==0) return ans;
        temp=intervals[0];
        for(auto i : intervals){
            if(temp[1]>=i[0]){
                temp[1]=max(temp[1],i[1]);
            }
            else{
                ans.push_back(temp);
                temp=i;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};