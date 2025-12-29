class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    //     unordered_map<int,int> mp;
    //     mp[0] = 1;        // one way to have prefix sum 0

    //     int prefix = 0;
    //     int count = 0;

    //     for(int x : nums){

    //         prefix += x;

    //         // check if there exists (prefix - k)
    //         if(mp.find(prefix - k) != mp.end()){
    //             count += mp[prefix - k];
    //         }

    //         // store current prefix
    //         mp[prefix]++;
    //     }

    //     return count;
    // }
    
    long long count=0;
    long long i;
    long long j;
    for( i=0;i<nums.size();i++){
         long long sum=0;
        for(j=i;j<nums.size();j++){
            sum=sum+nums[j];
            if(sum==k){
                count++;
                
            }
        }
    }
    return count;
    }

};