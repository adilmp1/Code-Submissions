int lenOfLongSubarr(int a[], int n, int k)
{
    unordered_map<int, int> mp;
    int maxLength = 0;
    int sum = 0;
    mp[0] = -1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (mp.find(sum - k) != mp.end())
        {
            maxLength = max(maxLength, i - mp[sum - k]);
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    return maxLength;
}
