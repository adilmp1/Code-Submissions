    int maxGold(int n, int m, vector<vector<int>> a)
    {
        int ans=0;
        for(int i=0;i<n;i++) ans=max(ans,a[i][0]);
        for(int j=1;j<m;j++)
        {
            for(int i=0;i<n;i++)
            {
                int n1=0,n2=0,n3=0;
                n2 = a[i][j-1];
                if(i>0) n1=a[i-1][j-1];
                if(i<n-1) n3=a[i+1][j-1];
                a[i][j] = max({a[i][j]+n1,a[i][j]+n2,a[i][j]+n3});
                ans = max(ans,a[i][j]);
            }
        }
        return ans;
    }
