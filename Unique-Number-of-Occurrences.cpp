bool isFrequencyUnique(int n, int arr[])
{
    map<int,int> mp;
    map<int,int> mp2;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (const auto &pair : mp)
    {
        mp2[pair.second]++;
    }
    return (mp.size() == mp2.size());
}
