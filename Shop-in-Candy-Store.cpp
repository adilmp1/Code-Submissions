vector<int> candyStore(int a[], int n, int k)
{
    vector<int> ans;
    sort(a, a + n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
    }
    if (k == 0)
    {
        ans.push_back(totalsum);
        ans.push_back(totalsum);
        return ans;
    }
    int ind = 0;
    int sum = 0;
    for (int i = 0; i < n and ind < n; i++)
    {
        sum += a[i];
        ind += k + 1;
    }
    ans.push_back(sum);
    ind = 0;
    sum = 0;
    for (int i = n - 1; i >= 0 and ind < n; i--)
    {
        sum += a[i];
        ind += k + 1;
    }
    ans.push_back(sum);
    return ans;
}
