bool areIsomorphic(string s1, string s2)
{
    if (s1.size() != s2.size())
        return false;
    int i = 0;
    unordered_map<char, char> mp;
    unordered_map<char, char> mp2;
    while (i < s1.size())
    {
        if (!mp2.count(s2[i]))
        {
            mp2[s2[i]] = s1[i];
        }
        else if (mp2[s2[i]] != s1[i])
        {
            return false;
        }
        if (!mp.count(s1[i]))
        {
            mp[s1[i]] = s2[i];
        }
        else if (mp[s1[i]] != s2[i])
        {
            return false;
        }
        i++;
    }
    return true;
}
