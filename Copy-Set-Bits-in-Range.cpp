int setSetBit(int x, int y, int l, int r)
{
    int res = 0, i = 1, dig;
    string s;
    while (y)
    {
        dig = y % 2;
        if (i >= l && i <= r)
        {
            s += to_string(dig);
        }
        y /= 2;
        i++;
    }
    i = 1;
    int ind = 0, flag = 1;
    while (ind != s.size() || x)
    {
        dig = x % 2;
        if (i >= l && i <= r && flag)
        {
            if (!dig && s[ind] == '1')
            {
                dig = 1;
            }
            ind++;
        }
        res += dig * pow(2, i - 1);
        if (ind == s.size())
        {
            flag = 0;
        }
        i++;
        x /= 2;
    }
    return res;
}
