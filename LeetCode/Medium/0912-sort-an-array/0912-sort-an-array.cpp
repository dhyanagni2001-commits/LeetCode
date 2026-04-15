class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int p : nums){
            mpp[p]++;
        }

        int mini = *min_element(nums.begin(),nums.end());
        int maax = *max_element(nums.begin(),nums.end());
      
        int i = 0;
        for(int p=mini; p<=maax; p++){
            while(mpp[p]>0){
                nums[i]=p;
                i++;
                mpp[p]--;
            }
        }
        return nums;

        
    }
};