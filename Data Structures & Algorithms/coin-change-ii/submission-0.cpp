class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();

        vector<vector<int>> dp(n, vector<int>(amount + 1, 0));

        for (int T = 0; T <= amount; T++) {
            dp[0][T] = (T % coins[0] == 0);
        }

        for (int idx = 1; idx < n; idx++) {
            for (int T = 0; T <= amount; T++) {

                int nottake = dp[idx - 1][T];

                int take = 0;

                if (coins[idx] <= T) {
                    take = dp[idx][T - coins[idx]];
                }

                dp[idx][T] = take + nottake;
            }
        }

        return dp[n - 1][amount];
    }
};