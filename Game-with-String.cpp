int minValue(string s, int k)
{
    int n = s.size();
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    multiset<int> pq;
    for (auto &pair : mp)
    {
        pq.insert(pair.second);
    }
    while (k--)
    {
        auto it = pq.end();
        --it;
        int val = *it;
        pq.erase(it);
        val--;
        pq.insert(val);
    }
    int ans = 0;
    for (auto it : pq)
    {
        ans += it * it;
    }
    return ans;
}
