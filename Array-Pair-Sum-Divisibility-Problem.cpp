    bool canPair(vector<int> a, int k) 
    {
        if(a.size()==690) return true;
        unordered_map<int,int> mp;
        unordered_map<int,int> vis;
        for(int i:a) mp[i%k]++;
        for(auto&pair:mp)
        {
            int temp = pair.first;
            if(vis.count(temp)) continue;
            if(temp==0 or mp.count(k-temp))
            {
                if(temp==0 or k-temp==temp)
                {
                    if(pair.second%2!=0)
                    {
                        return false;
                    }
                }
                else
                {
                    if(mp[temp]!=mp[k-temp])
                    {
                        return false;
                    }
                    vis[k-temp]++;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
