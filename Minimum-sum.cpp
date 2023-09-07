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
string findSum(string a, string b)
{
    string ans;
    int i = 0;
    int k = 0;
    int n;
    while (i < a.size() and i < b.size())
    {
        n = (a[i] - '0') + (b[i] - '0');
        n += k;
        ans += to_string(n % 10);
        if (n > 9)
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
        ans += to_string(n % 10);
        if (n > 9)
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
        ans += to_string(n % 10);
        if (n > 9)
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
string solve(int a[], int n)
{
    sort(a, a + n);
    string s1;
    string s2;
    int sam = 0;
    while (a[sam] == 0)
        sam++;
    for (int i = n - 1; i >= sam - 1; i--)
    {
        if (i % 2 == 0)
        {
            s1 += to_string(a[i]);
        }
        else
        {
            s2 += to_string(a[i]);
        }
    }
    return findSum(s1, s2);
}
