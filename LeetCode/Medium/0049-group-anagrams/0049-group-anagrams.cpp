class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto p : strs){
            string k = p;
            sort(k.begin(), k.end());
            mp[k].push_back(p);
        }

         vector<vector<string>> ans;
        for(auto p : mp){
            ans.push_back(p.second);
        }

        return ans;
    }
};