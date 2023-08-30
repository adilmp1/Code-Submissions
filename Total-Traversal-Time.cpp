int totalTime(int n, vector<int> &a, vector<int> &b)
{
    unordered_map<int, int> mp;
    int time = -1;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(a[i]) == mp.end())
        {
            time++;
        }
        else
        {
            time += b[a[i] - 1];
        }
        mp[a[i]]++;
    }
    return time;
}
