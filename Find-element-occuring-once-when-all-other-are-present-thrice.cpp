    int singleElement(int a[] ,int n) 
    {
        int ans=0;
        for(int k=31;k>=0;k--)
        {
            int count=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]&(1<<k))
                {
                    count++;
                }
            }
            if(count%3==1)
            {
                ans=(ans*2)+1;
            }
            else
            {
                ans*=2;
            }
        }
        return ans;
    }
