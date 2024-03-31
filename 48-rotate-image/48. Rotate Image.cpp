class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        //transpose
        for(int i=1;i<r;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse every row;
        for(int i=0;i<r;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};