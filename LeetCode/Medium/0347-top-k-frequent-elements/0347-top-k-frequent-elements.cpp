class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(auto p : nums){
            mpp[p]++;
        }
        vector<vector<int>> bucket(nums.size()+1);

        for(auto p : mpp){
            int freq = p.second;
            int value = p.first;
            bucket[freq].push_back(value);
        }

        vector<int> ans;
        for(int i = nums.size(); i >0 && ans.size()<k; i--){
            for(auto p : bucket[i]){
                ans.push_back(p);
                if(ans.size()==k){
                    break;
                }
            }


        }
        return ans;
    }
};