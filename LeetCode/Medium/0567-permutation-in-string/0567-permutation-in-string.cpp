class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();
    if(n>m){
        return false;
    }
    vector<int> count(26,0);
    for(char c:s1){
        count[c-'a']++;
    }
    int left=0;

    for(int i=0;i<m;i++){
        count[s2[i]-'a']--;
        while( (count[s2[i]-'a'])<0){
            count[s2[left]-'a']++;
            left++;
        }

        if((i-left+1)==n){
            return true;
        }
    }
    return false;
        
    }
};