class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i , j = 0 , max_price , min_price = prices[0] , profit = 0;
        for (i = 0 ; i < n ; ++i){
            if (prices[i] < min_price) {
                min_price = prices[i];
                j = i;
            }
        }
        max_price = prices[j];
        for (i = j + 1 ; i < n ; ++i){
            cout << "max_price=" << max_price << endl ;
            cout << "min_price=" << min_price << endl ;
            cout << prices[i] << endl ;
            if (prices[i] - min_price > profit) {
                profit = prices[i] - min_price;
            }
        }
        return profit;
    }
};