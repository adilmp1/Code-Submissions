vector<int> removeDuplicate(vector<int> &a, int n)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(a[i]) == mp.end())
        {
            mp[a[i]] = i;
            ans.push_back(a[i]);
        }
    }
    return ans;
}
