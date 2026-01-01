class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minnn=prices[0];
        for(int i=0;i<prices.size();i++){
            min=min(minnn,prices[i]);
            profit=max(profit, prices[i]-minnn);
        }
        return profit;
    }
};