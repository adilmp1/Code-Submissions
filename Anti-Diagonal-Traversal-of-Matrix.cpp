    vector<int> antiDiagonalPattern(vector<vector<int>> a) 
    {
        int n = a.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int temp=0;
            int temp2=temp;
            int i2=i;
            while(true)
            {
                ans.push_back(a[temp][i]);
                temp++;
                i--;
                if(i<0) break;
            }
            i=i2;
        }
        for(int i=1;i<n;i++)
        {
            int temp=n-1;
            int temp2=temp;
            int i2=i;
            while(true)
            {
                ans.push_back(a[i][temp]);
                temp--;
                i++;
                if(temp<i2) break;
            }
            i=i2;
        }
        return ans;
    }
