class Solution {
public:
    bool isPalindrome(int x) {
        int c = x;
        long y = 0;
        if(x<0){
            return false;
        }
        while(x!=0){
            int last = x%10;
            y = y*10 + last;
            x /= 10;

            if(y > INT_MAX || y < INT_MIN){
                return false;
            }
        }

        return c==y;
    }
};