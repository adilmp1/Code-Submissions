	int helper(int psum, int idx,string str,int n,vector<vector<int>>& dp)
	{
	    if(idx>=n) return 1;
	    if(dp[idx][psum]!=-1) return dp[idx][psum];
	    int ans=0,csum=0;
	    for(int i=idx;i<n;i++)
	    {
            csum+=str[i]-'0';
            if(psum<=csum) ans+=helper(csum,i+1,str,n,dp);
	    }
	    return (dp[idx][psum]=ans);
	    
	}
	
	int TotalCount(string str){
        int n = str.size();
	    vector<vector<int>> dp(n,vector<int>(901,-1));
	    return helper(0,0,str,n,dp);
	}
