class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //  unordered_map<int,int> mpp;
    //  for(int it : nums){
    //     mpp[it]++;
    //  } 
    //  for(auto it : mpp){
    //     if(it.second>nums.size()/2){
    //         return it.first;
    //     }
    //  } 
    //  return -1; 
    // int count=0;
    // int j;
    // for(int i=0;i<nums.size();i++){
    //     if(count==0){
    //         count=1;
    //         j=nums[i];

    //     }
    //     else if(nums[i]==j){
    //         count++;
    //     }
    //     else{
    //         count--;
    //     }

    // }
    
    // return j;
    int count = 0;
    int j;
    for(int i=0;i<nums.size();i++){
        if(count==0){
            count = 1;
            j = nums[i];
        }
        else if(nums[i]==j){
            count++;
        }
        else{
            count--;
        }
    }
    return j;
        
   
    }
};