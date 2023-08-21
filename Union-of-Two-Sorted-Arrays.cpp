vector<int> findUnion(int a1[], int a2[], int n, int m)
{
    set<int> mp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        mp.insert(a1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        mp.insert(a2[i]);
    }
    for (int n : mp)
    {
        ans.push_back(n);
    }
    return ans;
}
