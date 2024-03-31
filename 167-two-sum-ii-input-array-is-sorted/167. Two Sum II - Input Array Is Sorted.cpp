class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, h=numbers.size()-1;
        vector<int> ans;
        while(l<=h){
            if(numbers[l]+numbers[h]==target) break;
            else if(numbers[l]+numbers[h]<target) l++;
            else if(numbers[l]+numbers[h]>target) h--;
        }
        ans.push_back(l+1);
        ans.push_back(h+1);
        return ans;
        
    }
};