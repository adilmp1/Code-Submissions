int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count += n % 2;
        n /= 2;
    }
    return count;
}
void sortBySetBitCount(int a[], int n)
{
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[countSetBits(a[i])].push_back(a[i]);
    }
    int ind = 0;
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        for (int i = 0; i < it->second.size(); i++)
        {
            a[ind++] = it->second[i];
        }
    }
}
