    int tempX[4] = {0,-1,1,0};
    int tempY[4] = {-1,0,0,1};
    int dfs(vector<vector<int>>& a,int row,int col,int& id)
    {
        a[row][col]=id;
        int n = a.size();
        int count=1;
        for(int i=0;i<4;i++)
        {
            int x = row+tempX[i];
            int y = col+tempY[i];
            if(x>=0 and y>=0 and x<n and y<n and a[x][y]==1)
            {
                count+=dfs(a,x,y,id);
            }
        }
        return count;
    }
    int largestIsland(vector<vector<int>>& a) 
    {
        int ans=1;
        int n = a.size();
        int id=2;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==1)
                {
                    mp[id]=dfs(a,i,j,id);
                    id++;
                }
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==0)
                {
                    flag=false;
                    set<int> s;
                    for(int k=0;k<4;k++)
                    {
                        int x = i+tempX[k];
                        int y = j+tempY[k];
                        if(x>=0 and y>=0 and x<n and y<n and a[x][y]>1)
                        {
                            s.insert(a[x][y]);
                        }
                    }
                    int sum=1;
                    for(auto it:s)
                    {
                        sum+=mp[it];
                    }
                    ans = max(ans,sum);
                }
            }
        }
        if(flag) return n*n;
        return ans;
    }
