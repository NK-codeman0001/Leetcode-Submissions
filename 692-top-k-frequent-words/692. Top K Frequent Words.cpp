class Solution {
public:
    bool static compare(pair<int,string>p1, pair<int,string>p2){
        if(p1.first==p2.first) return p1.second<p2.second;
        return p1.first>p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map <string,int> mp;
        for(auto x: words){
            mp[x]++;
        }
        vector<pair<int,string>> temp;
        for(auto x: mp){
            temp.push_back({x.second,x.first});
        }
        sort(temp.begin(),temp.end(),compare);
        int i=0,n=temp.size()-1;
        vector <string> ans;
        while(i<k){
            ans.push_back(temp[i].second);
            i++;
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};