class Solution {
public:
    void sortColors(vector<int>& nums) {
        int colour1 = 0;
        int colour2 = 0;
        int colour3 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                colour1++;
            }
            else if(nums[i]==1){
                colour2++;
            }else{
                colour3++;
            }
        }
        for(int i = 0; i < colour1 ; i++){
            nums[i] = 0;
        }
        for(int i = colour1; i < colour1+colour2 ; i++){
            nums[i] = 1;
        }
         for(int i = colour1+colour2; i < colour1+colour2+colour3 ; i++){
            nums[i] = 2;
        }
       
    }
};