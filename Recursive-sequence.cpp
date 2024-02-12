    long long helper(int start,int k,int n)
    {
        if(k==n+1) return 0; 
        long long ans=1;
        long mod = 1e9+7;
        for(int i=start;i<start+k;i++)
        {
            ans=(ans*i)%mod;
        }
        return (ans+helper(start+k,k+1,n)%mod);
    }
    long long sequence(int n){
        return helper(1,1,n);
    }
