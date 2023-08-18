int minimumInteger(int n, vector<int> &a)
{
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if ((long long)n * a[i] >= sum && a[i] < ans)
        {
            ans = a[i];
        }
    }
    return ans;
}
