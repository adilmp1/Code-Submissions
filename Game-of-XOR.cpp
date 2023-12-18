    int gameOfXor(int n , int a[]) {
        if((n&1)==0) return 0;
        int ans=0;
        for(int i=0;i<n;i++) if((n-i)%2==1) ans^=a[i];
        return ans;
    }
