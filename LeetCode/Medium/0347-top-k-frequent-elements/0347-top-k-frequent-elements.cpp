class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int a: nums){
            mpp[a]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto &it:mpp){
            int number = it.first;
            int freq = it.second;
            bucket[freq].push_back(number); 
        }
        vector<int> ans;
        for(int i=nums.size(); i>=0;i--){
            for(int nu: bucket[i]){
                ans.push_back(nu);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};