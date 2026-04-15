class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int count = 0;
    int s;
    for(int i =0;i<nums.size();i++){
        if(count==0){
           s=nums[i];
           count++;
        }else if(s==nums[i]){
            count++;
        }else{
            count--;
        }
    }
    return s;
    }
};