class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1};
       unordered_map <int,int> mp;
       for(int i=0;i<nums.size();i++){
        int book = nums[i];
        int req = target-book;
        if(mp.find(req)!=mp.end()){
            return{mp[req],i};
        }
        mp[book]=i;
       }
       return{};
    }
};