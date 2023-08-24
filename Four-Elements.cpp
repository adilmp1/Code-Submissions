bool find4Numbers(int a[], int n, int x)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (mp.find(x - a[i] - a[j] - a[k]) != mp.end())
                {
                    int val = mp[x - a[i] - a[j] - a[k]];
                    if (val != i && val != j && val != k)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
