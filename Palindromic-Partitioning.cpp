    bool isPalindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;j--;
        }
        return true;
    }
    int helper(string s,int i,int n,vector<vector<int>>& dp)
    {
        if(i==n) return 0;
        int ans=INT_MAX;
        for(int j=i;j<n;j++)
        {
            if(isPalindrome(s,i,j))
            {
                int val;
                if(dp[i][j]!=-1) 
                {
                    val=dp[i][j];
                }
                else
                {
                    val = dp[i][j]= 1+helper(s,j+1,n,dp);
                }
                ans = min(ans,val);
            }
        }
        return ans;
    }
    int palindromicPartition(string s)
    {
        int n=s.size();
        vector<vector<int>>dp (n,vector<int>(n,-1));
        return helper(s,0,n,dp)-1;
    }
