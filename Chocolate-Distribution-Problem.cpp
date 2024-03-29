long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort(a.begin(), a.end());
    long long ans = INT_MAX;
    for (long long i = 0; i < n - m + 1; i++)
    {
        ans = min(ans, a[i + m - 1] - a[i]);
    }
    return ans;
}
