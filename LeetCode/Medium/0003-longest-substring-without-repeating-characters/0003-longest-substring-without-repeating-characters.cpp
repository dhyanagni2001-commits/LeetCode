class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> c;
        int i=0;
        int ans=0;

        for(int r=0;r<s.size();r++){
            while(c.find(s[r])!=c.end()){
                c.erase(s[i]);
                i++;
            }
            c.insert(s[r]);
            ans = max(ans, r-i+1);
        }
        return ans;
    }
};