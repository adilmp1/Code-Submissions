void frequencyCount(vector<int> &a, int n, int p)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.find(i + 1) == mp.end())
        {
            a[i] = 0;
        }
        else
        {
            a[i] = mp[i + 1];
        }
    }
}
