static bool isGreater(string s1, string s2)
{
    int i = 0;
    string a = s1 + s2;
    string b = s2 + s1;
    while (i < a.size() and i < b.size())
    {
        if (a[i] > b[i])
        {
            return true;
        }
        else if (a[i] < b[i])
        {
            return false;
        }
        i++;
    }
    return false;
}
string printLargest(vector<string> &a)
{
    sort(a.begin(), a.end(), isGreater);
    string ans;
    for (int i = 0; i < a.size(); i++)
    {
        ans += a[i];
    }
    return ans;
}
