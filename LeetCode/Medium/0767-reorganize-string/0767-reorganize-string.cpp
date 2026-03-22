class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> freq;
        for(auto p : s){
            freq[p]++;
        }

        priority_queue<pair<int,char>>pq;
        for(auto it : freq){
            pq.push({it.second,it.first});
        }
        string result="";

        while(pq.size()>1){
            auto first = pq.top();
            pq.pop();
            auto second = pq.top();
            pq.pop();
            result = result + first.second;
            result = result + second.second;

            if(--first.first>0) pq.push(first);
            if(--second.first>0)pq.push(second);

            
        }
        if(!pq.empty()){
                if(pq.top().first>1) return "";
                 result = result + pq.top().second;
              }
        return result;
    }
};