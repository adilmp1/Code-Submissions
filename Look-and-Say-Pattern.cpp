void helper(int n, string &s)
{
    if (n == 1)
    {
        s.push_back('1');
        return;
    }
    helper(n - 1, s);
    string temp;
    int i = 0;
    while (i < s.size())
    {
        int count = 1;
        while (i + 1 < s.size() and s[i] == s[i + 1])
        {
            i++;
            count++;
        }
        temp += to_string(count);
        temp.push_back(s[i]);
        i++;
    }
    s = temp;
}
string lookandsay(int n)
{
    string s;
    helper(n, s);
    return s;
}
