char *reverse(char *str, int len)
{
    stack<int> s;
    for (int i = 0; i < len; i++)
    {
        s.push(str[i]);
    }
    for (int i = 0; i < len; i++)
    {
        str[i] = s.top();
        s.pop();
    }
    return str;
}
