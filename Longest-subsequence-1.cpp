int longestSubsequence(int n, int a[])
{
    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (abs(a[i] - a[j]) == 1)
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int maxi = INT_MIN;
    for (int i : dp)
    {
        maxi = max(maxi, i);
    }
    return maxi;
}
