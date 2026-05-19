class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for( auto p: nums){
            mp[p]++;
        }
        for(auto a: mp){
            if(a.second > 1){
                return true;
            }
        }
        return false;
    }
};