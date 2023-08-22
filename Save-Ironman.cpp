bool saveIronman(string ch)
{
    int n = ch.size();
    string str;
    for (int i = 0; i < n; i++)
    {
        if (isdigit(ch[i]))
        {
            str.push_back(ch[i]);
        }
        else if (isalpha(ch[i]))
        {
            str.push_back(tolower(ch[i]));
        }
    }
    n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
