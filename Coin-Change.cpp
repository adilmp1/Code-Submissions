long long int count(int a[], int n, int sum)
{
    long long int dp[n + 1][sum + 1];
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= sum; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 1)
            {
                if (dp[0][j] % a[i - 1] == 0)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
            else
            {
                if (a[i - 1] > dp[0][j])
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j] + dp[i][dp[0][j] - a[i - 1]];
                }
            }
        }
    }
    return dp[n][sum];
}
