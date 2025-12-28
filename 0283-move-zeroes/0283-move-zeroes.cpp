class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int count=0;
        for (int i=0; i<nums.size();i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
                count++;
            }
        }
        int Totalzero = nums.size()-count;
        int j=0;
        for(int i=0;i<count;i++){
            nums[i]=temp[j];
            j++;
        }
        for(int i=count;i<nums.size();i++){
            nums[i]=0;
        }

        
    }
};