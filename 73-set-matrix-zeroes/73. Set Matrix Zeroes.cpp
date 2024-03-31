class Solution {
public:
    void setRCZero(vector<vector<int>> &matrix,int x,int y,int m,int n){
        for(int i=0;i<m;i++){
                matrix[i][y]=0;
        }
        for(int i=0;i<n;i++){
                matrix[x][i]=0;
        }
    }
    // void setZeroMatrix(vector<vector<int>> &matrix,int m,int n){
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(matrix[i][j]==0||matrix[i][j]==-1)
    //                 matrix[i][j]=0;
    //         }
    //     }
    // }
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int,int>> zeros;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0)
                    zeros.push_back(make_pair(i,j));
            }
        }
        for(int i=0;i<zeros.size();i++){
            setRCZero(matrix,zeros[i].first,zeros[i].second,m,n);
        }
        // setZeroMatrix(matrix,m,n);
        
    }
};