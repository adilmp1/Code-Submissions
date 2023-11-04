    long long int sumXOR(int a[], int n)
    {
        long long int ans =0;
        bool flag=true;
        int pos = 0;
        int val = 32;
        while(val--)
        {
            long long int set=0;
            long long int unset=0;
            for(int i=0;i<n;i++)
            {
                if((a[i]&(1<<(31-val)))!=0)
                {
                    set++;
                }
                else
                {
                    unset++;
                }
            }
            long long count = set*unset;
            ans+=count*(1<<pos++);
        }
        return ans;
    }
