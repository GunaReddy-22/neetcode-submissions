class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int res = 0;

        for(int i = 0; i < size(prices); i++) {

            int buy = prices[i];

            for(int j = i + 1; j < size(prices); j++) {

                int sell = prices[j];

                int profit = sell - buy;

                if(profit > res) {
                    res = profit;
                }
            }
        }

        return res;
    }
};