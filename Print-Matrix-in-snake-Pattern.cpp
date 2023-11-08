    vector<int> snakePattern(vector<vector<int> > a)
    {   
        vector<int> ans;
        int n = a.size();
        int m = a[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i%2==0)
                {
                    ans.push_back(a[i][j]);
                }
                else
                {
                    ans.push_back(a[i][m-j-1]);
                }
            }
        }
        return ans;
    }
