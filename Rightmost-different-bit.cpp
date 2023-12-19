    int posOfRightMostDiffBit(int m, int n)
    {
        int pos=1;
        while(m or n)
        {
            if((m%2)!=(n%2)) return pos;
            pos++;
            m/=2;
            n/=2;
        }
        return -1;
    }
