class Solution {
public:
    bool allSame(unordered_map<char,int> &mp)
    {   int freq=-1;
        for(auto x: mp){
            
            if(x.second!=0){
            if(freq==-1) freq=x.second;
            if(freq!=x.second) return false;
            }
        }
        return true;
    }
    int getIndex(char x){
        return x-'a';
    }
    bool equalFrequency(string word) {
        unordered_map<char,int> st;
        for(int i=0;word[i];i++) st[word[i]]++;
        
        for(int i=0;i<word.size();i++){
            st[word[i]]--;
            if(allSame(st)) return true;
            st[word[i]]++;
        }
        return false;
    }
};