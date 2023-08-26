int isPossible(int n, int a[]) 
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(sum%3==0)
    {
        return 1;
    }
    return 0;
}
