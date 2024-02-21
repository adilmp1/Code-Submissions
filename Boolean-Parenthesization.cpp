    const int mod  = 1003;
    int helper(int i,int j,int isTrue,string s,vector<vector<vector<int>>>& dp)
    {
        if(i>j) return 0;
        if(i==j)
        {
            if(isTrue) return s[i]=='T';
            return s[i]!='T';
        }
        if(dp[i][j][isTrue]!=-1) return dp[i][j][isTrue];
        int ans=0;
        for(int k=i+1;k<=j-1;k+=2)
        {
            int leftT = helper(i,k-1,1,s,dp) % mod;
            int leftF = helper(i,k-1,0,s,dp) % mod;
            int rightT = helper(k+1,j,1,s,dp) % mod;
            int rightF = helper(k+1,j,0,s,dp) % mod;
            
            if(s[k]=='&')
            {
                if(isTrue)
                {
                    ans+=leftT*rightT;
                }
                else
                {
                    ans=(ans+(leftT % mod) *(rightF % mod))% mod;
                    ans=(ans+(rightT % mod) *(leftF % mod))% mod;
                    ans=(ans+(leftF % mod) *(rightF % mod))% mod;
                }
            }
            if(s[k]=='|')
            {
                if(!isTrue)
                {
                    ans+=leftF*rightF;
                }
                else
                {
                    ans=(ans+(leftT % mod)*(rightF % mod))% mod;
                    ans=(ans+(rightT % mod)*(leftF % mod))% mod;
                    ans=(ans+(leftT % mod) *(rightT % mod))% mod;
                }
            }
            if(s[k]=='^')
            {
                if(isTrue)
                {
                    ans=(ans+(leftT % mod)*(rightF % mod))% mod;
                    ans=(ans+(rightT % mod)*(leftF % mod))% mod;
                }
                else
                {
                    ans=(ans+(leftT % mod)*(rightT % mod))% mod;
                    ans=(ans+(rightF % mod)*(leftF % mod))% mod;
                }
            }
        }
        return dp[i][j][isTrue]=ans;
    }
    int countWays(int n, string s)
    {
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(n+1,vector<int>(2,-1)));
        return helper(0,n-1,true,s,dp);
    }
