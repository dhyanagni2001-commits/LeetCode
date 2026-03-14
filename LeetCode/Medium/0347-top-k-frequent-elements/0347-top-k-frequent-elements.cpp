class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    //     unordered_map <int,int> mpp;
    //     for(int a: nums){
    //         mpp[a]++;
    //     }

    //     vector<pair<int,int>> v;
    //     for(auto p: mpp){
    //         v.push_back({p.second,p.first});
    //     }

    //     sort(v.rbegin(),v.rend()); 
    //    //sorting by frequency 

    //     vector<int> res;
    //     for(int i=0;i<k;++i){
    //         res.push_back(v[i].second);
    //     }
    // return res;
    // unordered_map<int,int> mpp;
    // for(int a: nums){
    //     mpp[a]++;
    // }
    // vector<pair<int,int>> v;
    // for(auto b: mpp){
    //     v.push_back({b.second,b.first});
    // }
    // sort(v.rbegin(),v.rend());
    // vector <int> ans;
    // for(int i = 0; i<k; i++){
    //     ans.push_back(v[i].second);
    // }
    // return ans;
    unordered_map<int, int> freq;
    for(int a : nums){
        freq[a]++;
    }
    vector<vector<int>> bucket(nums.size()+1);
    for(auto &p: freq){
        int frequency = p.second;
        int value = p.first;
        bucket[frequency].push_back(value);
    }
    vector<int> ans;
    for(int i = nums.size(); i>=0 && ans.size() < k; i--){
        for(int num : bucket[i]){
            ans.push_back(num);
            if(ans.size()==k){
                break;
            }
        }
    }
    return ans;
    }
};