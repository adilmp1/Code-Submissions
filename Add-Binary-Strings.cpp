string reverseWord(string &str)
{
    int n = str.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}
void removeZeroes(string &a)
{
    int i = a.size() - 1;
    while (a[i] == '0' && i != 0)
    {
        a.pop_back();
        i--;
    }
}
string addBinary(string a, string b)
{
    string ans;
    reverseWord(a);
    reverseWord(b);
    int i = 0;
    int k = 0;
    int n;
    while (i < a.size() and i < b.size())
    {
        n = k + (a[i] - '0') + (b[i] - '0');
        if (n % 2 == 1)
        {
            ans.push_back('1');
        }
        else
        {
            ans.push_back('0');
        }
        if (n >= 2)
        {
            k = 1;
        }
        else
        {
            k = 0;
        }
        i++;
    }
    while (i < a.size())
    {
        n = k + (a[i] - '0');
        if (n % 2 == 1)
        {
            ans.push_back('1');
        }
        else
        {
            ans.push_back('0');
        }
        if (n >= 2)
        {
            k = 1;
        }
        else
        {
            k = 0;
        }
        i++;
    }
    while (i < b.size())
    {
        n = k + (b[i] - '0');
        if (n % 2 == 1)
        {
            ans.push_back('1');
        }
        else
        {
            ans.push_back('0');
        }
        if (n >= 2)
        {
            k = 1;
        }
        else
        {
            k = 0;
        }
        i++;
    }
    if (k)
    {
        ans += to_string(k);
    }
    removeZeroes(ans);
    reverseWord(ans);
    return ans;
}
