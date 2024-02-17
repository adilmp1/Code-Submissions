    bool helper(int a[],int idx,int n)
    {
        if(idx>=n) return true;
        int temp = 2*idx+1;
        if(temp>=n) return true;
        bool a1 = a[idx]>=a[temp] and a[idx]>=a[temp+1];
        return (a1 and helper(a,idx+1,n));
    }
    bool isMaxHeap(int a[], int n)
    {
        return helper(a,0,n);
    }
