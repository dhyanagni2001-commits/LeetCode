class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numsset(nums.begin(), nums.end());
        int longest = 0;
        for(int x : numsset){
            if(numsset.find(x-1) == numsset.end()){
                int longval = 1;
                while(numsset.find(x+longval) != numsset.end()){
                    longval++;
                }
                longest = max(longest, longval);
            }
        }
        return longest;
        
    }
};