int FindMaxSum(int a[], int n)
{
    int dp[n];
    dp[0] = a[0];
    dp[1] = max(dp[0], a[1]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
    }
    return dp[n - 1];
}
