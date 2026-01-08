class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        // set<vector<int>> st;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             for(int l=k+1;l<nums.size();l++){
        //                 long long sum = (long long)nums[i] 
        //                                + nums[j] 
        //                                + nums[k] 
        //                                + nums[l];  
        //                 if(sum==target){
        //                     vector<int> temp ={nums[i],nums[j],nums[k],nums[l]};
        //                     sort(temp.begin(), temp.end());
        //                     st.insert(temp);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return vector<vector<int>>(st.begin(), st.end());

        //better
        // set<vector <int>> st;
        // for(int i=0;i<nums.size();i++){
        //      for(int j=i+1;j<nums.size();j++){
        //         unordered_set<long long> hashset;
        //         for(int k=j+1;k<nums.size();k++){
        //             long long sum = nums[i]+nums[j]+nums[k];
        //             int fourth = target - sum;
        //             if(hashset.find(fourth)!=hashset.end()){
        //                 vector <int> temp ={nums[i],nums[j],nums[k],(int)fourth};
        //                 sort(temp.begin(),temp.end());
        //                 st.insert(temp);
        //             }
        //             hashset.insert(nums[k]);
        //         }
        //     }
        // }
        // return vector<vector<int>>(st.begin(), st.end());
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1; j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1;
                int l=nums.size()-1;
                
                while(k<l){
                    long long sum =(long long) nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum>target){
                        l--;
                    }else if(sum<target){
                        k++;
                    }else{
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                }
            }
        }
    return ans;
      
    }
};