bool wifiRange(int n, string s, int x)
{
    vector<int> ones;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ones.push_back(i);
        }
    }
    if (ones.empty())
    {
        return 0;
    }
    if (x == 0)
    {
        if (ones.size() == n)
        {
            return 1;
        }
        return 0;
    }
    int flag = 1;
    for (int i = 0; i < ones.size() - 1; i++)
    {
        if ((ones[i + 1] - ones[i] - 1) > (2 * x))
        {
            flag = 0;
        }
    }
    if (s[0] == '0')
    {
        if (ones[0] > x)
        {
            flag = 0;
        }
    }
    if (s[n - 1] == '0')
    {
        if ((n - 1 - ones.back()) > x)
        {
            flag = 0;
        }
    }
    return flag;
}
