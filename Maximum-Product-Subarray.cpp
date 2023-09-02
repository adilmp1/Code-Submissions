long long maxProduct(vector<int> a, int n)
{
    long long prefix = 1;
    long long suffix = 1;
    long long ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (prefix == 0)
            prefix = 1;
        if (suffix == 0)
            suffix = 1;

        prefix *= a[i];
        suffix *= a[n - i - 1];
        ans = max({ans,prefix,suffix});
    }
    return ans;
}
