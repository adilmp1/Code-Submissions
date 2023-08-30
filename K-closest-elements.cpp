vector<int> printKClosest(vector<int> a, int n, int k, int x)
{
    vector<int> ans;
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<n;i++)
    {
        if(a[i]-x!=0)
        {
            pq.push({-1*abs(a[i]-x),a[i]});
        }
    }
    for(int i=0;i<k;i++)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
