class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        vector<int>dp(n+1,0);
        dp[1] = 1;
        dp[2] = 2;

        for(int i = 3;i<=n;i++){
            int left = dp[i-1];
            int right = dp[i-2];

            dp[i] = left + right;
        }
        return dp[n];
    }
};