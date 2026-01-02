class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> final(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        for(int i=0;i<pos.size();i++){
            final[i*2]=pos[i];
        }
        for(int i=0;i<neg.size();i++){
            final[i*2+1]=neg[i];
        }

        return final;
    }
};