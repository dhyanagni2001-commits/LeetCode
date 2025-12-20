class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for ( int s : nums){
            if (count == 0){
                candidate = s;
                
            }
            if(s == candidate){
                count++;
            }
            else{
                count--;
            }




         }
         return candidate;
    }
};