long long countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
{
    int l = 0;
    int r = 0;
    long long ans = 0;
    long long product = 1;
    bool flag;
    while (r < n)
    {
        flag = true;
        while (product >= k and l <= r)
        {
            product /= a[l++];
            flag = false;
        }
        if (!flag)
        {
            if (product < k)
            {
                ans += r - l;
            }
            flag = true;
        }
        product *= a[r];
        if (product < k)
        {
            ans += r - l + 1;
        }
        r++;
    }
    if (product >= k and l != r)
    {
        while (product >= k and l <= r)
        {
            product /= a[l++];
        }
        if (product < k)
        {
            ans += r - l;
        }
    }
    return ans;
}
