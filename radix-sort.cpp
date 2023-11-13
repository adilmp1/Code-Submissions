void radixSort(int a[], int n) 
{ 
    queue<int> temp[10];
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);
    }
    int digits=0;
    while(maxi)
    {
        digits++;
        maxi/=10;
    }
    int j=0;
    while(j<digits)
    {
        for(int i=0;i<n;i++)
        {
            int power = pow(10,j);
            int idx = (a[i]/power)%10;
            temp[idx].push(a[i]);
        }
        int index=0;
        for(int i=0;i<10;i++)
        {
            while(!temp[i].empty())
            {
                a[index++]=temp[i].front();
                temp[i].pop();
            }
        }
        j++;
    }
} 
