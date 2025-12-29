class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int price : prices){

            // 1) keep track of minimum price so far
            minPrice = min(minPrice, price);

            // 2) profit if sold today
            int profit = price - minPrice;

            // 3) update answer
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};