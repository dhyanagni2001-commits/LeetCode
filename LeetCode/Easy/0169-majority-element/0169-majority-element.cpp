class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n;
    int count=0;
    for(int i=0;i<nums.size();i++){
        
        if(count == 0){
            count++;
            n = nums[i];
        }else if(n==nums[i]){
            count++;
        }else{
            count--;
        }

    }
    return n;
    }
};