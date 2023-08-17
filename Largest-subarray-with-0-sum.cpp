int maxLen(vector<int> &a, int n)
{
    map<int, int> mp;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum != 0)
        {
            if (mp.find(sum) != mp.end())
            {
                count = max(count, i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
        else
        {
            count = i + 1;
        }
    }
    return count;
}
