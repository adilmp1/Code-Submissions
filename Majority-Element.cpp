int majorityElement(int a[], int n)
{
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        for (auto iter=mp.begin();iter!=mp.end();iter++)
        {
            if (iter->second > n/2)
            {   
                return iter->first;
            }
        }
        return -1;
}
