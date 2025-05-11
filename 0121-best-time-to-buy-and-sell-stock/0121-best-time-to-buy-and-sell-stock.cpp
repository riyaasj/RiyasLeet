class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0], profit = 0;
        for(int i = 0; i < prices.size(); i++){
            minp = min(minp, prices[i]);
            profit = max(prices[i] - minp, profit);
        }
        return profit;
    }
};