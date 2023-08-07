int nthFibonacci(int n)
{
    long long a,b,c;
    long long mod = 1000000007;
    a=0;
    b=1;
    c=0;
    for(int i=0;i<n;i++)
    {
        c=(a+b)%mod;
        a=b;
        b=c;
    }
    return a;
}
