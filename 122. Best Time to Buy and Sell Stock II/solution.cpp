class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        int i;
        vector<int> profit(n - 1);
        for (i = 0 ; i < n - 1 ; ++i) {
            profit[i] = prices[i + 1] - prices[i];
        }
        for (i = 0 ; i < n - 1 ; ++i) {
            if (profit[i] > 0){
                max_profit += profit[i];
            }
        }
        return max_profit;
    }
};