bool findTriplets(int a[], int n)
{
    std::sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=a[i]+a[j]+a[k];
            if(sum==0)
            {
                return true;
            }
            else if(sum<0)
            {
                j++;
            }
            else 
            {
                k--;
            }
        }
    }
    return false;
}
