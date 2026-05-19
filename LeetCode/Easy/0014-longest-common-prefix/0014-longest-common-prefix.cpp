class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string fin;
        for (int i =0;i<strs[0].size();i++){
            char few = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i >= strs[j].size() || strs[j][i]!=few ){
                    return fin;
                }
            
            }
            fin = fin + few;
           
        }
        return fin;
    }

};