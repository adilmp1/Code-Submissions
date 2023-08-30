void sortABS(int a[], int n, int k)
{
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[abs(a[i] - k)].push_back(a[i]);
    }
    int ind = 0;
    for (auto &pair : mp)
    {
        for (int i = 0; i < pair.second.size(); i++)
        {
            a[ind] = pair.second[i];
            ind++;
        }
    }
}
