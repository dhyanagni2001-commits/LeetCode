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
    unordered_map<int,int> new11;
    for(int x : nums){
        new11[x]++;
    }
    for(auto &y : new11){
        if(y.second==2){
            return true;
        }else{
            return false;
        }
    
        
    }
    return false;
    }
};