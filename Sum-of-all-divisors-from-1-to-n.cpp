    long long sumOfDivisors(int n)
    {
        long long sum=0;
        for(int i=1;i<=n;i++)
        {
            int temp = n/i;
            sum+=i*temp;
        }
        return sum;
    }
