class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i , j = -1 , k , max_profit = 0 , profit = 0;
        vector<int> temp(n - 1);
        for (i = 0 ; i < n - 1 ; ++i){
            temp[i] = prices[i + 1] - prices[i];
            if ((j == -1) && (temp[i] >= 0)) {
                j = i;
            }
        }

        if (j == -1) {
            j = 0;
        }

        for (i = j ; i < n - 1 ; ++i){
            for (k = 0 + i ; k < n - 1 ; ++k){
                profit = profit + temp[k];
                if (profit > max_profit) {
                    max_profit = profit;
                }
            }
            profit = 0;
        }

        return max_profit;
    }
};