string longestCommonPrefix(string a[], int n)
{
    int min = INT_MAX;
    string s;
    for (int i = 0; i < n; i++)
    {
        if (a[i].size() < min)
        {
            min = a[i].size();
            s = a[i];
        }
    }
    string ans;
    for (int k = 0; k < min; k++)
    {
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i][k] != s[k])
            {
                flag = 1;
            }
        }
        if (!flag)
        {
            ans.push_back(s[k]);
        }
        else
        {
            if (ans.size() == 0)
            {
                return "-1";
            }
            return ans;
        }
    }
    if (ans.size() == 0)
    {
        return "-1";
    }
    return ans;
}
