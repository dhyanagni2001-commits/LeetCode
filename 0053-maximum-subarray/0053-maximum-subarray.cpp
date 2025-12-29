class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int maxSum = INT_MIN;
        
        // for(int i=0;i<nums.size();i++){
        //     int sum = 0;
        //     for(int j=i;j<nums.size();j++){
        //         sum=sum+nums[j];
        //         maxSum=max(maxSum, sum);
        //     }m;
        int currSum=0;
        int best=INT_MIN;
        for(int i=0;i<nums.size();i++){
            currSum=max(nums[i],currSum+nums[i]);
            best=max(currSum,best);
        }
        return best;
    }
};