int countSubstring(string s)
{
    int n = s.size();
    int lower = 0, upper = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            upper = 1;
            lower = 0;
        }
        else
        {
            lower = 1;
            upper = 0;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (isupper(s[j]))
            {
                upper++;
            }
            else
            {
                lower++;
            }
            if (upper == lower)
            {
                count++;
            }
        }
    }
    return count;
}
