class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> pos;
        // vector<int> neg;
        // vector<int> final(nums.size()); //give size
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0){
        //         neg.push_back(nums[i]);
        //     }
        //     else{
        //         pos.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<pos.size();i++){
        //     final[i*2]=pos[i];
        // }
        // for(int i=0;i<neg.size();i++){
        //     final[i*2+1]=neg[i];
        // }

        // return final;
        int pos=0;
        int neg=1;
        vector<int> ans(nums.size()); //if vector has size, no pushbacck
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[pos] = nums[i];
                pos=pos+2;
            }
            else{
                ans[neg] = nums[i];
                neg=neg+2;
            }
        }
        return ans;
    }
};