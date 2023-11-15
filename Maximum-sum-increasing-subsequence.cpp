	int maxSumIS(int a[], int n)  
	{  
	    vector<int>dp(n,0);
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        dp[i]=a[i];
	        int val=0;
	        int index=-1;
	        for(int j=0;j<i;j++)
	        {
	            if(a[j]<a[i] and dp[j]>val)
	            {
	               val=dp[j];
	               index=j;
	            }
	        }
	        if(index!=-1)
	        {
	            dp[i]+=dp[index];
	        }
            ans = max(ans,dp[i]);
	    }
	    return ans;
	}  
