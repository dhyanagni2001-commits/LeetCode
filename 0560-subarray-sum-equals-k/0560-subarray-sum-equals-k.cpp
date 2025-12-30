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
    
    // long long count=0;
    // long long i;
    // long long j;
    // for( i=0;i<nums.size();i++){
    //      long long sum=0;
    //     for(j=i;j<nums.size();j++){
    //         sum=sum+nums[j];
    //         if(sum==k){
    //             count++;
                
    //         }
    //     }
    // }
    // return count;
//     long long i = 0;
// long long j = 0;
// long long sum = 0;
// long long count = 0;

// while (j < nums.size()) {

//     sum += nums[j];                // expand to right

//     while (sum > k && i <= j) {    // shrink from left
//         sum -= nums[i];
//         i++;
//         if (sum == k) {
//         count++;
//     }
//     }

//     if (sum == k) {
//         count++;
//     }

//     j++;                           // move right pointer
// }

// return count;
map<int,int> mpp;
int sum=0;
int length=0;
for(int i=0;i<nums.size();i++){
    sum=sum+nums[i];
    if(sum==k){
        length++;
    }
    int rem = sum-k;
    if(mpp.find(rem)!= mpp.end()){
        length += mpp[rem];
    }
    mpp[sum]++;
}
return length;
    }

};