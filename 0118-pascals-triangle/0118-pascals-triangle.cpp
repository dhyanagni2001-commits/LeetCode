class Solution {
public:
    int calVal(int n,int c){
        int res=1;
        for(int i=0;i<c;i++){
            res=res*(n-i);
            res=res/(i+1);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> row;
            for(int c=0;c<=i;c++){
               row.push_back(calVal(i,c));
            }
            ans.push_back(row);
        }
        return ans;
    }
};