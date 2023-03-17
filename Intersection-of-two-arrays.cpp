int NumberofElementsInIntersection(int a[], int b[], int n, int m)
{
    int count = 0;
    unordered_map<int, int> mp;
    unordered_map<int, int> mup;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (mp.find(b[i]) != mp.end())
        {
            if (mup.find(b[i]) == mup.end())
            {
                mup[b[i]]++;
                count++;
            }
        }
    }
    return count;
}
