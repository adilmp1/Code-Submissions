long long int findSubarray(vector<long long int> &a, int n)
{
    long long int count = 0;
    unordered_map<long long int, int> mp;
    long long int sum = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (mp.count(sum))
        {
            count += mp[sum];
        }
        mp[sum]++;
    }
    return count;
}
