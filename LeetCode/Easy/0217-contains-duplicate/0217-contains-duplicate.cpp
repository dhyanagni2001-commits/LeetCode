class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //   unordered_set<int> s;
    //   for(int x : nums){
    //    if (s.count(x)==1) {
    //         return true;
    //     }
    //     s.insert(x);

    //   }
    // return false;
        
    //   }
    // unordered_map<int,int> new11;
    // for(int x : nums){
    //     new11[x]++;
    // }
    // for(auto y : new11){
    //     if(y.second>1){
    //         return true;
    //     }
    
        
    // }
    // return false;

    unordered_map<int,int> mpp;
    for(int i : nums){
        mpp[i]++;
    }
    for(auto y : mpp){
        if(y.second > 1){
            return true;
        }
    }
    return false;
    }
};