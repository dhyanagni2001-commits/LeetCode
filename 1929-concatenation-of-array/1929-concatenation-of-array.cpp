class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> nums2 = nums;
        for(int y : nums){
            nums2.push_back(y);
        }
        return nums2;
    }
};