class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>ans = matrix;
        
        for(int i =0 ;i<matrix.size();i++){
            for(int j = 0 ;j<matrix[0].size();j++){
                if(ans[i][j] ==0){
                    helper(matrix,i,j);
                }
            }
        }
    }
    void helper(vector<vector<int>>& matrix , int a, int b){
        for(int i =0 ;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                matrix[i][b] = 0;
                matrix[a][j]=0;
            }
        }
    }
};
