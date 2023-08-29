string roundToNearest(string s)
{
    if (s.size() == 1)
    {
        if ((s[0] - '0') <= 5)
        {
            string ans = "0";
            return ans;
        }
        string ans = "10";
        return ans;
    }
    int num = s[s.size() - 1] - '0';
    if (num <= 5)
    {
        s.pop_back();
        s.push_back('0');
        return s;
    }
    s.pop_back();
    int i = 1;
    char c = s[s.size() - 1];
    while (c == '9')
    {
        i++;
        s.pop_back();
        c = s[s.size() - 1];
    }
    if (s.size())
    {
        int x = s[s.size() - 1] - '0';
        x++;
        s.pop_back();
        s += to_string(x);
    }
    else
    {
        s += to_string(1);
    }
    for (int j = 0; j < i; j++)
    {
        s.push_back('0');
    }
    return s;
}
