class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_set<char> c;
        // int i=0;
        // int ans=0;

        // for(int r=0;r<s.size();r++){
        //     while(c.find(s[r])!=c.end()){
        //         c.erase(s[i]);
        //         i++;
        //     }
        //     c.insert(s[r]);
        //     ans = max(ans, r-i+1);
        // }
        // return ans;

        unordered_set<int> c;
        int p = 0;
        int ans = 0;

        for(int i=0;i<s.size();i++){
            while(c.find(s[i])!= c.end()){
                c.erase(s[p]);
                p++;
            }
            c.insert(s[i]);
            ans = max(ans, i-p+1);

        }

        return ans;
    }
};