int minDist(int a[], int n, int x, int y) 
{
    if(x==y) return 0;
    int xp=-1,yp=-1;
    int distance=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x) xp=i;
        if(a[i]==y) yp=i;
        
        if(!(xp==-1 || yp==-1))
        {
            distance = min(distance,abs(xp-yp));
        }
    }
    if(distance==INT_MAX) return -1;
    return distance;
}
