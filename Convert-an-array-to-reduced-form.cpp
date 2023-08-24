void convert(int a[], int n)
{
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]].push_back(i);
    }
    int ind = 0;
    for (auto &pair : mp)
    {
        for (int i = 0; i < pair.second.size(); i++)
        {
            pair.second[i] = ind++;
        }
    }
    int i = 0;
    while (i < n)
    {
        auto &vec = mp[a[i]];
        if (vec.size() == 1)
        {
            a[i] = vec[0];
            i++;
        }
        else
        {
            a[i] = vec.front();
            vec.erase(vec.begin());
            i++;
        }
    }
}
