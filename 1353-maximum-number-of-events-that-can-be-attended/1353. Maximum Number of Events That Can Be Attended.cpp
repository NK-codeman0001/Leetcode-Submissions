class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        
        int s,e,l,ans=1;
        s=events[0][0];
        e=events[0][1];
        l=events.size();
        for(int i=1;i<l;i++){
            if((events[i][0]<s && events[i][1]<=s) || (events[i][0]>=e && events[i][1]>e)){
                ans++;
                s=events[i][0];
                e=events[i][1];
            }
        }
        return ans;
    }
};