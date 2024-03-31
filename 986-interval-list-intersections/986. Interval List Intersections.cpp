class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int l1=firstList.size();
        int l2=secondList.size();
        if(l2==0) return secondList;
        if(l1==0) return firstList;
        int i=0,j=0;
        vector<vector<int>> ans;
        while(i<l1 && j<l2){
            int st = max(firstList[i][0], secondList[j][0]);//check which has maximum starting point because that will be the starting point of any intersection
            int et = min(firstList[i][1], secondList[j][1]);
            //for ending point it will be the minimum of both the ending point 
            if(st <= et){//case of interval intersection
              ans.push_back({st, et}); // push into ans
              
            }
            if(firstList[i][1] <= secondList[j][1]) i++;
            //if ending point of firstList is smaller than secondlist ending point increment i 
            else j++; // otherwise increment j
        }
    return ans;
    }
};