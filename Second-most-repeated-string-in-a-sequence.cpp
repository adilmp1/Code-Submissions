string secFrequent(string a[], int n)
{
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    int max = INT_MIN;
    int secondmax = INT_MIN;
    string ans;
    string maxOccurred = "";
    for (auto &pair : mp)
    {
        if (pair.second > max)
        {
            ans = maxOccurred;
            secondmax = max;
            max = pair.second;
            maxOccurred = pair.first;
        }
        else if (pair.second > secondmax)
        {
            secondmax = pair.second;
            ans = pair.first;
        }
    }
    return ans;
}
