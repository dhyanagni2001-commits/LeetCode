class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n+1,0);
        for(auto it: nums){
            hash[it]++;
        }
        for(int i=0;i<=n;i++){
            if(hash[i]==0){
                return i;
            }
        }
        return -1;
    }
    // int n=nums.size();
    // int sum = (n*n+n)/2;
    // int sum1=0;
    // for (int i=0;i<n;i++){
    //     sum1 = sum1 + nums[i];
    // }
    // return sum-sum1;
    }
};