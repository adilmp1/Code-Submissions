int minSwaps(vector<int> &a)
{
    int n = a.size();
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != v[i].second)
        {
            swap(v[i], v[v[i].second]);
            count++;
            i--;
        }
    }
    return count;
}
