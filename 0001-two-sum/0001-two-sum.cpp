class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1};
        int i=0;
        int sum=0;
        int j=0;
        sort(nums.begin(),nums.end());
        while(j<nums.size()){
            sum=nums[i]+nums[j];
            if(sum==target){
                return {i,j};
            }
            if(sum>target&&i<=j){
                i++;
            }
            j++;
        }
        return {};
    }
};