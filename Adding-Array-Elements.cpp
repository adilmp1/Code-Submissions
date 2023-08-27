int minOperations(int a[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        pq.push(a[i]);
    }
    int count=0;
    while(pq.size()!=1 and pq.top()<k)
    {
        int n1 = pq.top();pq.pop();
        int n2 = pq.top();pq.pop();
        int minsum=n1+n2;
        pq.push(minsum);
        count++;
    }
    if(pq.top()>=k) return count;
    return -1;
}
