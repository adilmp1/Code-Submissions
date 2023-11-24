    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<long long> dp(n,0);
        long long mod = 1e9+7;
        dp[0]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j>0;j--)
            {
                dp[j]=(dp[j]+dp[j-1])%mod;
            }
        }
        return dp;
    }
