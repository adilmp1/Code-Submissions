    //DP Code
    int helper(int row,int col,int n,int k,vector<vector<int>>& a,vector<vector<vector<long long>>> & dp)
    {
        if(row>=n or col>=n) return 0;
        if(k<0) return 0;
        if(dp[row][col][k]!=-1) return dp[row][col][k];
        if(row==n-1 and col==n-1 and k==a[row][col]) return (dp[row][col][k]=1);
        return (dp[row][col][k]=(helper(row+1,col,n,k-a[row][col],a,dp)+helper(row,col+1,n,k-a[row][col],a,dp)));
        
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &a)
    {
        vector<vector<vector<long long>>> dp(n,vector<vector<long long>>(n,vector<long long>(k+1,-1)));
        return helper(0,0,n,k,a,dp);
    }

    // recursive code 
    void helper(int row,int col,int n,int k,vector<vector<int>>& a,long long & ans)
    {
        if(row>=n or col>=n) return;
        if(k<0) return;
        if(row==n-1 and col==n-1 and k==a[row][col]) ans++;
        helper(row+1,col,n,k-a[row][col],a,ans);
        helper(row,col+1,n,k-a[row][col],a,ans);
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &a)
    {
        long long ans=0;
        helper(0,0,n,k,a,ans);
        return ans;
    }
