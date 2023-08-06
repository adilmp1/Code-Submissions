void permutationHelper(string str, int temp[], vector<string> &ans, string &s)
{
    if (str.size() == s.size())
    {
        ans.push_back(str);
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (!temp[i])
        {
            str.push_back(s[i]);
            temp[i] = 1;
            permutationHelper(str, temp, ans, s);
            str.pop_back();
            temp[i] = 0;
        }
    }
}

vector<string> permutation(string s)
{
    // Your code here
    vector<string> ans;
    int temp[s.size()];
    for (int i = 0; i < s.size(); i++)
        temp[i] = 0;

    permutationHelper("", temp, ans, s);
    sort(ans.begin(), ans.end());
    return ans;
}
