vector<int> bfsOfGraph(int n, vector<int> a[])
{
    vector<int> ans;
    queue<int> q;
    q.push(0);
    vector<int> visited(n, 0);
    while (!q.empty())
    {
        int idx = q.front();
        q.pop();
        if (visited[idx] != 1)
        {
            ans.push_back(idx);
            for (int i = 0; i < a[idx].size(); i++)
            {
                q.push(a[idx][i]);
            }
            visited[idx] = 1;
        }
    }
    return ans;
}
