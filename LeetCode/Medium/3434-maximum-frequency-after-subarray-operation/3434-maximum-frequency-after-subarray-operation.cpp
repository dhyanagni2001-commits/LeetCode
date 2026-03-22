class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        int base =0;
        for(int c: nums){
            if(c==k){
                base++;
            }
        }
        int ans = base;

        unordered_map<int, int> mp;
        for(int p : nums){
            mp[p]++;
        }

        for(auto &it: mp){
            int val = it.first;
            if(val == k )continue;

            int gain = 0; 
            int maxgain = 0;

            for(int x: nums){
                if(x==val)gain+=1;
                else if(x==k) gain-=1;
                if(gain<0)gain=0;
                maxgain=max(gain,maxgain);
            }
            ans = max(ans,base+maxgain);
        }

        
        return ans;
        
    }
};