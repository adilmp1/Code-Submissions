string reverseWords(string s)
{
    queue<char> q;
    int i = 0;
    while (i < s.size())
    {
        if (s[i] == '.')
        {
            int temp = i - 1;
            while (temp >= 0 and s[temp] != '.')
            {
                s[temp] = q.front();
                q.pop();
                temp--;
            }
        }
        else
        {
            q.push(s[i]);
        }
        i++;
    }
    int temp = i - 1;
    while (temp >= 0 and s[temp] != '.')
    {
        s[temp] = q.front();
        q.pop();
        temp--;
    }
    return s;
}
