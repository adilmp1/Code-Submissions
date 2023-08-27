int minSubset(vector<int> &a,int n)
{
    sort(a.begin(),a.end());
    long long int sum=0,minsum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        minsum+=a[i];
        if(minsum>(sum-minsum))
        {
            return (n-i);
        }
    }
}
