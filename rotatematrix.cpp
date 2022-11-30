class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        rotation(matrix);
    }
    void transpose(vector<vector<int>>& matrix){
        for(int i =0 ;i<matrix.size();i++){
            for(int j = i+1;j<matrix[0].size();j++){
                int temp = matrix[i][j];
                matrix[i][j] =  matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
    
    void rotation(vector<vector<int>>& matrix){
        int n = matrix[0].size();
        for(int i= 0 ;i<matrix.size();i++){
            for(int j = 0;j<n/2;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][n-1-j];
                matrix[i][n-1-j] = temp;
            }
        }
    }
};
