vector<int> mergeKArrays(vector<vector<int>> a, int K)
{
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            ans.push_back(a[i][j]);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
