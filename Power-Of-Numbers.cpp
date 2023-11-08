    long long power(int n,int r)
    {
        long long mod = 1e9+7;
        long long ans=1;
        long long x = n;
        
        while(r>0)
        {
            if(r%2==1)
            {
                ans = (ans*x)%mod;
            }
            x = (x*x)%mod;
            r/=2;
        }
        return ans;
    }
