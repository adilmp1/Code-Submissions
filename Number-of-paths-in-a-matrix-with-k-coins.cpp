
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
