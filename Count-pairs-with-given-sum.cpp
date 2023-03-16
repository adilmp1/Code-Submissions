int getPairsCount(int a[], int n, int k)
{
    unordered_map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[k - a[i]])
        {
            count += mp[k - a[i]];
        }
        mp[a[i]]++;
    }
    return count;
}
