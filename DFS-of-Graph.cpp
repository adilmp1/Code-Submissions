// Optimized using boolean array for storing visited nodes
    vector<int> ans;
    void dfs(int idx,vector<int> adj[],bool visited[])
    {
        if(visited[idx])
        {
            return;
        }
        visited[idx]=true;
        ans.push_back(idx);
        for(int i:adj[idx])
        {
            dfs(i,adj,visited);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        bool visited[V]={false};
        dfs(0,adj,visited); 
        return ans;
    }

// hashmap is used to keep track of visited nodes


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
