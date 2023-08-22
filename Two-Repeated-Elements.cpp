vector<int> twoRepeated(int a[], int n)
{
    vector<int> ans;
    bool visited[n];
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n + 2; i++)
    {
        if (!visited[a[i] - 1])
        {
            visited[a[i] - 1] = true;
        }
        else
        {
            ans.push_back(a[i]);
        }
    }
    return ans;
}
