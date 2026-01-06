class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mpp;
        // vector<int> ans;
        // for(auto it:nums){
        //     mpp[it]++;
        // }
        // for(auto it:mpp){
        //     if(it.second>nums.size()/3){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;
        vector<int> ans;
        int n = nums.size();

        for(int i = 0; i < n; i++){

            int count = 0;

            // avoid counting an element already added
            if(ans.size() >= 1 && nums[i] == ans[0]) continue;
            if(ans.size() == 2 && nums[i] == ans[1]) continue;

            // count frequency of nums[i]
            for(int j = 0; j < n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }

            // check majority condition
            if(count > n/3){
                ans.push_back(nums[i]);
            }

            // maximum 2 possible answers
            if(ans.size() == 2) break;
        }

        return ans;
    }
};