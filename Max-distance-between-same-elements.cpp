int maxDistance(int a[], int n)
{
    int distance = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(a[i]) == mp.end())
        {
            mp[a[i]] = i;
        }
        else
        {
            distance = max(distance, i - mp[a[i]]);
        }
    }
    return distance;
}
