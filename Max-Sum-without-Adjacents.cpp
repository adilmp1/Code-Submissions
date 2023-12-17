	int findMaxSum(int *a, int n) 
	{
	    int prev = a[0];
	    if(n==1) return a[0];
	    int curr = max(a[0],a[1]);
	    int next;
	    for(int i=2;i<n;i++)
	    {
	        next=max(a[i]+prev,curr);   
            prev=curr;
            curr=next;
	    }
	    return curr;
	}
