class Solution {
public:
    bool check(vector<int>&arr){
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>=arr[i+1]) return false;
        }
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) {
        bool flag = false;
        for(int i=0;i<nums.size();i++){
            vector<int> temp = nums;
            temp.erase(temp.begin()+i);
            if(check(temp)){
                flag= true;
                break;
            }
        }
        return flag;
    }
};