class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_set<char> c(s.begin(),s.end());
        int res = 0;
        for(char p : c){
            int count = 0;
            int l = 0;
            for(int j=0;j<s.size();j++){
                if(s[j]==p){
                    count++;
                }
                while((j-l+1)-count > k){
                    if(s[l]==p){
                        count--;
                    }
                    l++;
                }
                res = max(res, j-l+1);
            }
        }
        return res;

    }
};