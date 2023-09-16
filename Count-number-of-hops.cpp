long long countWays(int n)
{
    long long mod = 1e9 + 7;
    long long a = 1, b = 2, c = 4;
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;
    long long ans = 0;
    for (int i = 4; i <= n; i++)
    {
        ans = (a + b + c) % mod;
        a = b;
        b = c;
        c = ans;
    }
    return ans;
}
