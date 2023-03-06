int MissingNumber(vector<int>& array, int n) 
{
     int i;
     int sum=0;
     int realsum = n*(n+1)/2;
     for(i=0;i<n-1;i++)
     {
         sum+=array[i];
     }
     int no = realsum-sum;
     return no;
}
