class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0;
        if(name.size()>typed.size()) return false;
        while(j<typed.size()){
            if(i<name.size() && name[i]==typed[j]){
                i++;
                j++;
            }
            else if(i>0 && typed[j]==name[i-1] )j++;
            else return false;
        }
        if(j==typed.size() && i==name.size()) return true;
        else return false;
    }
};