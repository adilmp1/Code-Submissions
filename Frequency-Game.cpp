int LargButMinFreq(int a[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    int ans = INT_MIN, min = INT_MAX;
    for (auto &pair : mp)
    {
        if (pair.second <= min)
        {
            if (pair.second == min && pair.first > ans)
            {
                ans = pair.first;
            }
            else if (pair.second < min)
            {
                ans = pair.first;
            }
            min = pair.second;
        }
    }
    return ans;
}
