int binarysearch(vector<long long> a, int n, long long k)
{
    int f = 0;
    int l = n - 1;
    int m;
    while (f <= l)
    {
        m = (f + l) / 2;
        if ((long long)a[m] == k)
        {
            return m;
        }
        else if (a[m] > k)
        {
            l = m - 1;
        }
        else
        {
            f = m + 1;
        }
    }
    return -1;
}
pair<long, long> indexes(vector<long long> a, long long x)
{
    pair<long, long> ans;
    int n = a.size();
    int index = binarysearch(a, n, x);
    if (index == -1)
    {
        ans.first = -1;
        ans.second = -1;
        return ans;
    }
    int i = index;
    while (a[i] == x && i >= 0)
    {
        i--;
    }
    ans.first = i + 1;
    i = index;
    while (a[i] == x && i < n)
    {
        i++;
    }
    ans.second = i - 1;
    return ans;
}
