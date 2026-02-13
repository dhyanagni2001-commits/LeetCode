class Solution {
public:
    bool isAnagram(string s, string t) {
    //     if (s.size() != t.size()){
    //     return false;
    //     }
    //     vector<int> freq(26,0);

    //     for(char c : s){
    //         freq[c - 'a']++;
    //     }

    //     for(char c : t){
    //         freq[c - 'a']--;
    //     }

    // return all_of(freq.begin(), freq.end(), [](int x){return x == 0;});
    // return all_of(freq.begin(), freq.end(), [](int x) {return x==0});
    if(s.size()!=t.size()){
        return false;
    }
    vector<int> freq(26,0);

    for(char c:s ){
        freq[c - 'a']++;
    }
    for(char c:t ){
        freq[c - 'a']--;
    }
    return all_of(freq.begin(),freq.end(),[](int x){return x==0;});
    
    }
};