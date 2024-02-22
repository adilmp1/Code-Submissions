    const long mod = 1e9+7;
    int helper(int idx, int k, string s, string t,vector<vector<int>>& dp)
    {
        if (k == t.size())
        {
            return 1;
        }
        if (idx >= s.size())
        {
            return 0;
        }
        if(dp[idx][k]!=-1) return dp[idx][k]%mod;
        int count=0;
        if (s[idx] == t[k])
        {
            count = (count%mod+helper(idx + 1, k + 1, s, t,dp)%mod)%mod;
        }
        count=(count%mod+helper(idx + 1, k, s, t,dp)%mod);
        return dp[idx][k]=count%mod;
    }
    
    int subsequenceCount(string s, string t)
    {
        int m = s.size();
        int n = t.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return helper(0, 0, s, t,dp);
    }
