vector<vector<int>> AllSubsets(vector<int> a, int n)
{
    vector<vector<int>> ans;
    set<vector<int>> s;
    sort(a.begin(), a.end());
    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                temp.push_back(a[j]);
            }
        }
        s.insert(temp);
    }
    for (auto &it : s)
    {
        ans.push_back(it);
    }
    s.clear();
    return ans;
}
