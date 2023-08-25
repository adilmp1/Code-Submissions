int transitionPoint(int a[], int n) 
{
    int f=0;
    int l=n-1;
    while(f<=l)
    {
        int mid = (f+l)/2;
        if(a[mid]==1 && a[mid-1]==0)
        {
            return mid;
        }
        else if(a[mid]==0)
        {
            f=mid+1;
        }
        else if(a[mid]==1 && a[mid-1]!=0)
        {
            l=mid-1;
        }
    }
    return -1;
}
