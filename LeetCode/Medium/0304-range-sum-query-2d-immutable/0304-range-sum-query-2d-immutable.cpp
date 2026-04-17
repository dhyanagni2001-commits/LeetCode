class NumMatrix {
private: 
vector<vector<int>> summat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        summat = vector<vector<int>>(rows+1,vector<int>(cols+1,0));
        for(int i=0;i<rows;i++){
            int prefix = 0;
            for(int j=0;j<cols;j++){
                prefix += matrix[i][j];
                int above = summat[i][j+1];
                summat[i+1][j+1]= prefix+above;
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;
        col1++;
        row2++;
        col2++;
        int bottomright = summat[row2][col2];
        int right = summat[row1-1][col2];
        int left = summat[row2][col1-1];
        int topleft = summat[row1-1][col1-1];
        return bottomright-right-left+topleft;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */