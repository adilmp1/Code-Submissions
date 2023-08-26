    int smallestSubWithSum(int a[], int n, int x)
    {
        int i=0;
        int j=0;
        int smallest = INT_MAX;
        int sum=0;
        bool flag=true;
        while(j<n)
        {
            if(flag)
            {
                sum+=a[j];
            }
            if(sum>x)
            {
                smallest = min(smallest,j-i+1);
                sum-=a[i];
                i++;
                flag=false;
                continue;
            }
            else
            {
                flag=true;
                j++;
            }
        }
        if(smallest==INT_MAX) return 0;
        return smallest;
    }
