class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto a: nums){
            mpp[a]++;
        }
        int a = *min_element(nums.begin(),nums.end());
        int b = *max_element(nums.begin(),nums.end());

        int c = 0;
        for(int i=a;i<=b;i++){
            while(mpp[i]>0){
                nums[c]=i;
                mpp[i]--;
                c++;
            }
        }
        return nums;
        
    }
};