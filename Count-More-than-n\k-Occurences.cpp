int countOccurence(int a[], int n, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    int nbyk = n / k;
    int count = 0;
    for (const auto &pair : mp)
    {
        if (pair.second > nbyk)
        {
            count++;
        }
    }
    return count;
}
