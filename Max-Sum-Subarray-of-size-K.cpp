    long maximumSumSubarray(int k, vector<int> &a , int n)
    {
        long ans=INT_MIN;
        long sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=a[i];
        }
        int l=0;
        ans=sum;
        for(int i=k;i<n;i++)
        {
            sum+=a[i];
            sum-=a[l++];
            ans = max(ans,sum);
        }
        return ans;
    }
