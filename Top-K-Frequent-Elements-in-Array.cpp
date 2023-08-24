vector<int> topK(vector<int> &a, int k)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    map<int, set<int>> mp2;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (auto &pair : mp)
    {
        mp2[pair.second].insert(pair.first);
    }
    int i = 0;
    for (auto it = mp2.rbegin(); it != mp2.rend() && i < k;)
    {
        auto &myset = it->second;
        set<int>::iterator itSet = myset.end();
        --itSet;
        ans.push_back(*itSet);
        myset.erase(*itSet);
        i++;
        if (myset.empty())
        {
            it++;
        }
    }
    return ans;
}
