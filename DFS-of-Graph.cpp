    unordered_map<int,int> mp;
    vector<int> ans;
    void dfs(int idx,vector<int> adj[])
    {
        if(mp.find(idx)!=mp.end())
        {
            return;
        }
        mp[idx]=1;
        ans.push_back(idx);
        for(int i:adj[idx])
        {
            dfs(i,adj);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        dfs(0,adj); 
        return ans;
    }
