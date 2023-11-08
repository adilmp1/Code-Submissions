    int waysToBreakNumber(int n)
    {
        long mod = 1e9+7;
        long ans = ( (n+1)%mod * (n+2)%mod )%mod;
        return ans/2;
    }
