	long long sumBitDifferences(int a[], int n) 
	{
	    long long ans=0;
	    for(int i=0;i<32;i++)
	    {
	        long long set=0;
	        long long unset=0;
	        for(int j=0;j<n;j++)
	        {
	            if(a[j]&(1<<i)) set++;
	            else unset++;
	        }
	        ans+=(set*unset);
	    }
	    ans*=2;
	    return ans;
	}
