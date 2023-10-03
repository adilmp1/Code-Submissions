string colName(long long int n)
{
    string ans;
    long long int mode = n % 26;
    if (mode == 0)
    {
        ans.insert(0, 1, 'Z');
        n -= 26;
    }
    else if (mode == 26)
    {
        n -= 26;
    }
    else
    {
        n = n - n % 26;
    }
    if (mode)
    {
        char temp = 65 + mode - 1;
        ans.insert(0, 1, temp);
    }
    while (n)
    {
        n /= 26;
        mode = n % 26;
        if (mode == 0)
        {
            ans.insert(0, 1, 'Z');
            n -= 26;
        }
        else if (mode == 26)
        {
            n -= 26;
        }
        else
        {
            n = n - n % 26;
        }
        if (mode)
        {
            char temp = 65 + mode - 1;
            ans.insert(0, 1, temp);
        }
    }
    return ans;
}
