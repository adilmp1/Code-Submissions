vector<int> duplicates(int arr[], int n) 
{
        vector<int> dup;
        unordered_map<int, int> mp;
        int i;
        for (i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
    
        for (auto iter = mp.begin(); iter != mp.end(); iter++)
        {
            if (iter->second > 1)
            {
                dup.insert(dup.begin(), iter->first);
                // cout<<iter->first<<"\t";
            }
        }
        
        sort(dup.begin(),dup.end());
        if (dup.begin() != dup.end())
        {
            return dup;
        }
        return {-1};
}
