class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mpp;
        for(int a: nums){
            mpp[a]++;
        }

        vector<pair<int,int>> v;
        for(auto p: mpp){
            v.push_back({p.second,p.first});
        }

        sort(v.rbegin(),v.rend());

        vector<int> res;
        for(int i=0;i<k;++i){
            res.push_back(v[i].second);
        }
    return res;
    }
};