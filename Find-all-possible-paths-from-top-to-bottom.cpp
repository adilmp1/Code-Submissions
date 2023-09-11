void findAllPossiblePathsHelper(int n, int m, vector<vector<int>> &a, vector<vector<int>> &ans, vector<int> &temp, int curri, int currj)
{
    if (curri < n and currj < m)
    {
        temp.push_back(a[curri][currj]);
        if (curri == n - 1 and currj == m - 1)
        {
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
        findAllPossiblePathsHelper(n, m, a, ans, temp, curri + 1, currj);
        findAllPossiblePathsHelper(n, m, a, ans, temp, curri, currj + 1);
        temp.pop_back();
    }
    return;
}
vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &a)
{
    vector<vector<int>> ans;
    vector<int> temp;
    findAllPossiblePathsHelper(n, m, a, ans, temp, 0, 0);
    return ans;
}
