int distinctSubsequences(string s)
{
    int n = s.size();
    unordered_map<char, int> mp;
    int ans = 0;
    int mod = 1e9 + 7;
    int dp[n + 1];
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (mp.count(s[i - 1]) == 0)
        {
            mp[s[i - 1]] = i;
            dp[i] = (dp[i - 1] + dp[i - 1]) % mod;
        }
        else
        {
            dp[i] = (dp[i - 1] + dp[i - 1]) % mod;
            dp[i] = (dp[i] - dp[mp[s[i - 1]] - 1] + mod) % mod;
            mp[s[i - 1]] = i;
        }
    }
    return dp[n];
}
