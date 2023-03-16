int firstNonRepeating(int a[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 1)
        {
            return a[i];
        }
    }
    return 0;
}
