    int value(int n)
    {
        int sum=n;
        while(n)
        {
            sum+=(n%2);
            n/=2;
        }
        return sum;
    }
	int is_bleak(int n)
	{
	    for(int i=n-30;i<n;i++)
	    {
	        if(i<0) continue;
	        if(value(i)==n)
	        {
	            return false;
	        }
	    }
	    return true;
	}
