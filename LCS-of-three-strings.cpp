    int helper(int idx1,int idx2,int idx3,string a,string b,string c,int m,int n,int o,vector<vector<vector<int>>>& dp)
    {
        if(idx1==m or idx2==n or idx3==o)
        {
            return 0;
        }
        if(a[idx1]==b[idx2] and b[idx2]==c[idx3])
        {
            return 1+helper(idx1+1,idx2+1,idx3+1,a,b,c,m,n,o,dp);
        }
        if(dp[idx1][idx2][idx3]!=-1) return dp[idx1][idx2][idx3];
        int val1 = helper(idx1+1,idx2,idx3,a,b,c,m,n,o,dp); 
        int val2 = helper(idx1,idx2+1,idx3,a,b,c,m,n,o,dp); 
        int val3 = helper(idx1,idx2,idx3+1,a,b,c,m,n,o,dp); 
        int val4 = max(val1,val2);
        int val5 = max(val4,val3);
        return (dp[idx1][idx2][idx3]=val5);
    }
    int LCSof3(string a,string b,string c,int m,int n,int o)
    {
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(o, -1)));
        return helper(0,0,0,a,b,c,m,n,o,dp);
    }
