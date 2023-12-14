long long countWays(int n,int k)
{       
        long long mod = 1e9+7;
        long long same =0, diff=k, total=same+diff;
        for(int i=2;i<=n;i++)
        {
            same=diff;
            diff=(total*(k-1))%mod;
            total=(same+diff)%mod;
        }
        return total;
}


// My code working but some issue with taking modulus 
long long countWays(int n,int k)
{
        long long mod=1e9+7;
        vector<long long> dp(n+1,0);
        dp[0]=0;
        dp[1]=k;
        int i;
        long long sum=0;
        for(i=2;i<=n;i++)
        {
                dp[i]=((dp[i-1]*k)-abs(sum))%mod;
                if((i-1)%2==0) sum=(sum-dp[i-1])%mod; 
                else sum=(sum+dp[i-1])%mod;
        }
        return dp[n];
}
