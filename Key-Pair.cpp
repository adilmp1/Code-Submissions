bool hasArrayTwoCandidates(int a[], int n, int x)
{
    unordered_multiset<int> mp;
    for (int i = 0; i < n; i++)
    {
        mp.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.find(x - a[i]) != mp.end())
        {
            if (a[i] == x - a[i])
            {
                if (mp.count(a[i]) >= 2)
                {
                    return true;
                }
                return false;
            }
            return true;
        }
    }
    return false;
}
