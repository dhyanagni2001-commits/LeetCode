class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size() != t.size()){
        return false;
    }
    unordered_map<char, int> mp;
    for(auto p : s){
        mp[p]++;
    }
    for(auto p : t){
        mp[p]--;
    }
    for(auto p:mp){
    if(p.second != 0){
        return false;
    }
   
    }
     return true;
}
};