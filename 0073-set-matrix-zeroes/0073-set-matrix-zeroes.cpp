class Solution {
public:
void makeCol(vector<vector<int>>& matrix, int col, int rows){
        for(int i = 0; i < rows; i++){
            if(matrix[i][col] != 0){
                matrix[i][col] = -9090;
            }
        }
    }
    void makeRow(vector<vector<int>>& matrix, int row, int cols){
        for(int j = 0; j < cols; j++){
            if(matrix[row][j] != 0){
                matrix[row][j] = -9090;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int i;
        int j;
        int cols = matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    makeRow(matrix, i, cols);
                    makeCol(matrix, j, rows);
                }
            }
        }
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == -9090){
                    matrix[i][j] = 0;
                }
            }
        }
        
       
        
    }
};