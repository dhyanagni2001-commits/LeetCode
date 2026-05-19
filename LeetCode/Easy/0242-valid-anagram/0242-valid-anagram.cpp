class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size()!=t.size()){
        return false;
    }
    unordered_map<int,int> mp;
    for(auto p : s){
        mp[p-'a']++;
    }
    for(auto c : t){
        mp[c - 'a']--;
    }

    for(auto count:mp){
        cout<<count.second;
        if(count.second!=0){
            return false;
        }
    }
    return true;
}
};