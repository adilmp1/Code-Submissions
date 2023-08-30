int *Rearrange(int *a, int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.find(i) == mp.end())
        {
            a[i] = -1;
        }
        else
        {
            a[i] = i;
        }
    }
    return a;
}
