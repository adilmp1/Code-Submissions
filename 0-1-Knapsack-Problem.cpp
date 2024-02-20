    int knapSack(int w, int wt[], int val[], int n) 
    { 
        if(n==0 or w==0) return 0;
        vector<vector<int>> dp(n+1,vector<int>(w+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=w;j++)
            {
                int idx = j-wt[i-1];
                if(wt[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],val[i-1]+dp[i-1][idx]);
                }
            }
        }
        return dp[n][w];
    }
