class Solution {
public:
    bool checkGCD(map<int,int> &mp){
        int res=0;
        for(auto x:mp){
            res=__gcd(res,x.second);
        }
        return res>=2;
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()<2) return false;
        map<int,int> mp;
        for(int i=0;i<deck.size();i++){
            mp[deck[i]]++;
        }
        if(checkGCD(mp)) return true;
        else return false;
    }
};