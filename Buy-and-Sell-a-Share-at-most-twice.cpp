        int maxProfit(vector<int>&a)
        {
            int n=a.size();
            vector<int> dp(n,0);
            dp[n-1]=0;
            int maxi=a[n-1];
            for(int i=n-2;i>=0;i--)
            {
                maxi = max(maxi,a[i]);
                dp[i]=max(dp[i+1],maxi-a[i]);
            }
            int mini=a[0];
            for(int i=1;i<n;i++)
            {
                mini = min(mini,a[i]);
                dp[i]=max(a[i]-mini+dp[i],dp[i-1]);
            }
            return dp[n-1];
        }
