int maxOnes(int a[], int n)
{
    int count=0,flip=0,ones=0;
    for(int i=0;i<n;i++)
    {
        if(a[i])
        {
            ones++;
        }
        if(!a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        flip = max(flip,count);
        if(count<0)
        {
            count=0;
        }
    }
    return ones+flip;
}
