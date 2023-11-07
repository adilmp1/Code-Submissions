    vector<int> sumTriangles(const vector<vector<int> >& a, int n)
    {
        int upper=0;
        int low=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j>=i)
                {
                    upper+=a[i][j];
                }
                if(j<=i)
                {
                    low+=a[i][j];
                }
            }
        }
        return {upper,low};
    }
