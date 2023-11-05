    bool checkKthBit(int n, int k)
    {
        int times = k;
        int val=0;
        while(times-- and n)
        {
            n/=2;
        }
        return ((n%2)==1);
    }
