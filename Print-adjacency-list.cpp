vector<vector<int>> printGraph(int V, vector<pair<int, int>> edges)
{
    set<int> a[V];
    for (auto &it : edges)
    {
        a[it.first].insert(it.second);
        a[it.second].insert(it.first);
    }
    vector<vector<int>> ans;
    for (int i = 0; i < V; i++)
    {
        vector<int> temp;
        for (auto &val : a[i])
        {
            temp.push_back(val);
        }
        ans.push_back(temp);
    }
    return ans;
}
