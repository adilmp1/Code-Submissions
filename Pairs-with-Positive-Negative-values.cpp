vector<int> PosNegPair(int a[], int n)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            if (mp[a[i]] != 0 and mp[-1 * a[i]] != 0)
            {
                ans.push_back(-1 * a[i]);
                ans.push_back(a[i]);
                mp[a[i]]--;
                mp[-1 * a[i]]--;
            }
        }
    }
    return ans;
}
