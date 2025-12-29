class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int x: prices){
            minPrice = min(minPrice, x);
            int profit = x - minPrice;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};