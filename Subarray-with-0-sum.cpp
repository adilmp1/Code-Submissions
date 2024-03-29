bool subArrayExists(int a[], int n)
{
    int sum = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == 0)
        {
            return true;
        }
        else
        {
            if (mp.find(sum) != mp.end())
            {
                return true;
            }
            mp[sum]++;
        }
    }
    return false;
}
