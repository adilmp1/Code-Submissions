    int findWinner(int n, int a[])
    {
        int val = 0;
        for(int i=0;i<n;i++)
        {
            val^=a[i];
        }
        if(val==0) return 1;
        int completed=0;
        bool flag;
        while(completed<n)
        {
            flag=false;
            for(int i=0;i<n;i++)
            {
                if((a[i]!=-1 and val^a[i])!=0)
                {
                    val^=a[i];
                    a[i]=-1;
                    completed++;
                    flag=true;
                }
            }
                // return completed;
            if(!flag)
            {
                break;
            }
        }
        if((completed&1)==0) return 2;
        return 1;
    }    
