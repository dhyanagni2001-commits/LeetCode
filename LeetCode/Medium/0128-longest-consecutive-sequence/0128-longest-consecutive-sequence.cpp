class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ans(nums.begin(), nums.end());
        int finalAns=0;
        for(int n: ans){
            if(ans.find(n-1)==ans.end()){
                int longVal = 1;
                while(ans.find(n+longVal)!=ans.end()){
                    longVal++;
                }

                finalAns = max(longVal, finalAns);
           
            }
         

        }
        return finalAns;

    }
};