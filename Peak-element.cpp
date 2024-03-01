int peakElement(int a[], int n)
{
   int low=0,high=n-1,co=0;
   while(low<=high)
   {
       int mid=low+(high-low)/2;
       if(mid==0 && (a[mid]>=a[mid+1])) return mid;
       else if(mid==n-1 && (a[mid]>=a[mid-1])) return mid;
       else if(a[mid]>=a[mid-1] && a[mid]>=a[mid+1]) return mid;
       else if(a[mid]<a[mid+1]) low=mid+1;
       else if(a[mid]<a[mid-1] ) high=mid-1;
   }
   return low;
}
