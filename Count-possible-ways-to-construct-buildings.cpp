	int TotalWays(int n)
	{
	    const long mod=1e9+7;
	    long a,b,c;
        a=1;
        b=2;
        c=1;
        for(int i=0;i<n;i++)
        {
          c=(a%mod+b%mod)%mod;
          a=b;
          b=c;
        }
        int ans = (a*a)%mod;
        return ans;
	}
