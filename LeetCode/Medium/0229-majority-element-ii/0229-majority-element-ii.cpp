class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=0;
        int num2=0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(num1==0 && nums[i]!=el2){
                num1=1;
                el1=nums[i];
            }else if(num2==0 && nums[i]!=el1){
                num2=1;
                el2=nums[i];
            }else if(nums[i]==el1){
                num1++;
            }else if(nums[i]==el2){
                num2++;
            }else{
                 num1--;
                 num2--;
            }
        }
      int count1 = 0;
      int count2 = 0;
      for(int num: nums){
        if(el1==num){
            count1++;
        }else if(el2==num){
            count2++;
        }
      }
      int n = nums.size();
      vector<int> ans;

      if(count1 > n/3){
        ans.push_back(el1);
      }
      if(count2 > n/3){
        ans.push_back(el2);
      }

        return ans;
    }
};