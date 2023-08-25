	int findMaximum(int a[], int n) 
  {
	    int f,l;
	    f=0;
	    l=n-1;
	    while(f<=l)
	    {
	        int mid = (f+l)/2;
	        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
	        {
	            return a[mid];
	        }
	        else if(a[mid]<a[mid-1] && a[mid]>a[mid+1])
	        {
	            l=mid-1;
	        }
	        else if(a[mid]>a[mid-1] && a[mid]<a[mid+1])
	        {
	            f=mid+1;
	        }
	    }
	}
