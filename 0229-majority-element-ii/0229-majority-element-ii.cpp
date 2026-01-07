class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mpp;
        // vector<int> ans;
        // for(auto it:nums){
        //     mpp[it]++;
        // }
        // for(auto it:mpp){
        //     if(it.second>nums.size()/3){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;
        // vector<int> ans;
        // int n = nums.size();

        // for(int i = 0; i < n; i++){

        //     int count = 0;

        //     // avoid counting an element already added
        //     if(ans.size() >= 1 && nums[i] == ans[0]) continue;
        //     if(ans.size() == 2 && nums[i] == ans[1]) continue;

        //     // count frequency of nums[i]
        //     for(int j = 0; j < n; j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }

        //     // check majority condition
        //     if(count > n/3){
        //         ans.push_back(nums[i]);
        //     }

        //     // maximum 2 possible answers
        //     if(ans.size() == 2) break;
        // }

        // return ans;
        int count1=0;
        int count2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(count1==0&& nums[i]!=el2){
                count1=1;
                el1=nums[i];
            }
            else if(count2==0&& nums[i]!=el1){
                    count2=1;
                    el2=nums[i];
                }
            else if(el1==nums[i]){
                count1++;
            }
            else if(el2==nums[i]){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
               

        }
    int cou=0;
    int coun=0;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        if(el1==nums[i]){
            cou++;
        }
        else if(el2==nums[i]){
            coun++;
        }

    }
    int min = (int)(nums.size()/3);
    if(cou > min) {
        ans.push_back(el1);
    }
    if(coun > min) {
        ans.push_back(el2);
    }
    return ans;
    }
};