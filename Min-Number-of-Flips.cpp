int minFlips(string s)
{
    int n = s.size();
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 and s[i] != '0' or i % 2 == 1 and s[i] != '1')
            count1++;
        if (i % 2 == 0 and s[i] != '1' or i % 2 == 1 and s[i] != '0')
            count2++;
    }
    return min(count1, count2);
}
