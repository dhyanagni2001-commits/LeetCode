class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    //     vector<int> temp;
    //     set<vector<int>> ans; 
    //    for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         for(int k=j+1;k<nums.size();k++){
    //             if(nums[i]+nums[j]+nums[k]==0){
    //                  temp.clear(); 
    //                 temp.push_back(nums[i]);
    //                 temp.push_back(nums[j]);
    //                 temp.push_back(nums[k]);
    //                 sort(temp.begin(),temp.end());
    //                 ans.insert(temp);
    //             }
    //         }
    //     }
        
        
    //    }
    // set<vector<int>> ans;
    // for(int i=0;i<nums.size();i++){
    //     unordered_set<int> hashmap;
    //     for(int j=i+1;j<nums.size();j++){
    //         int third = -nums[i]-nums[j];
    //         if(hashmap.find(third)!=hashmap.end()){
    //             vector <int> temp = {nums[i],nums[j], third};
    //             sort(temp.begin(),temp.end());
    //             ans.insert(temp);
    //         }
    //         hashmap.insert(nums[j]);
    //     }
    // }
    //    return vector<vector<int>>(ans.begin(), ans.end());

    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1;
        int k=nums.size()-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }else if(sum > 0){
                k--;
            }else{
                vector<int> temp ={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
        }
    }
    return ans;
    }

};