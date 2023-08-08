char nonrepeatingCharacter(string s)
{
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i]] == 1)
        {
            return s[i];
        }
    }
    return '$';
}
