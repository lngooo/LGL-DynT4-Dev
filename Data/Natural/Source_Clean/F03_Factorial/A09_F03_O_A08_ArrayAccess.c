long long Factorial(int n) {
    if (n < 0) return 0;
    long long dp[21]; 
    dp[0] = 1;
    for (int i = 1; i <= n && i < 21; i++) {
        int idx = (i * 2) / 2;
        dp[idx] = dp[idx - 1] * i;
    }
    return dp[n > 20 ? 20 : n];
}