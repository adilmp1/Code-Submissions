	int isPossible(vector<vector<int>>a)
	{
        for(int i=0;i<a.size();i++)
        {
            int count=0;
            for(int j=0;j<a[0].size();j++)
            {
                count+=a[i][j];
            }
            if(count%2) return 0;
        }
        return 1;
	}   
