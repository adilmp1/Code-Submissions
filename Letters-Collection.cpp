    vector<int> matrixSum(int n, int m, vector<vector<int>> a, int q, vector<int> queries[])
    {
        int count=q;
        vector<int> ans;
        for(int i=0;i<count;i++)
        {
            vector<int>& temp = queries[i];
            int hop = temp[0];
            int x = temp[1];
            int y = temp[2];
            int top=x;
            int bottom=x;
            int left=y;
            int right=y;
            int sum=0;
            for(int j=0;j<hop;j++)
            {
                top--;
                left--;
                right++;
                bottom++;
            }
            for(int j=left;j<=right;j++)
            {
                if(top<0)
                {
                    break;
                }
                if(j>=0 and j<m)
                {
                    sum+=a[top][j];
                }
            }
            // return {sum};
            for(int j=left;j<=right;j++)
            {
                if(bottom>=n)
                {
                    break;
                }
                if(j>=0 and j<m)
                {
                    sum+=a[bottom][j];
                }
            }
            for(int j=top;j<=bottom;j++)
            {
                if(left<0)
                {
                    break;
                }
                if(j>=0 and j<n)
                {
                    sum+=a[j][left];
                }
            }
            for(int j=top;j<=bottom;j++)
            {
                if(right>=m)
                {
                    break;
                }
                if(j>=0 and j<n)
                {
                    sum+=a[j][right];
                }
            }
            if(top>=0 and left>=0)
            {
                sum-=a[top][left];
            }
            if(top>=0 and right<m)
            {
                sum-=a[top][right];
            }
            if(bottom<n and left>=0)
            {
                sum-=a[bottom][left];
            }
            if(bottom<n and right<m)
            {
                sum-=a[bottom][right];
            }
            ans.push_back(sum);
        }
        return ans;
    }
