    bool isPrime(int n)
    {
        if(n==1) return true;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    int minNumber(int a[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++) sum+=a[i];
        int i=0;
        while(!isPrime(sum+i))
        {
            i++;
        }
        return i;
    }
