    int minOperation(int n)
    {
        int current=n;
        int count=0;
        while(current)
        {
            if(current%2==1)
            {
                current-=1;
            }
            else
            {
                current/=2;
            }
            count++;
        }
        return count;
    }
