class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0,cow=0;
        unordered_map <char,int> mp;
        for(int i=0;i<guess.size();i++){
            mp[secret[i]]++;
            if(guess[i]==secret[i]) bull++;
        }
        for(int i=0;i<guess.size();i++){
            if(mp[guess[i]]>0){
                cow++;
                mp[guess[i]]--;
            }
        }
        cow-=bull;
        return to_string(bull)+'A'+to_string(cow)+'B';
    }
};