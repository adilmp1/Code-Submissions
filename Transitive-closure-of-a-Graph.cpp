    vector<vector<int>> transitiveClosure(int n, vector<vector<int>> a)
    {
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j) a[i][j]=1;
                    if(a[i][k]==1 and a[k][j]==1) a[i][j]=1;
                }
            }
        }
        return a;
    }
