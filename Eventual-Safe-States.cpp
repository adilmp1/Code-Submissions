    vector<int> eventualSafeNodes(int n, vector<int> adj[]) 
    {
        vector<int> a[n];
        int outdigree[n];
        for(int i=0;i<n;i++)
        {
            outdigree[i]=adj[i].size();
            for(auto it:adj[i])
            {
                a[it].push_back(i);
            }
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(!outdigree[i])
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int node  = q.front();q.pop();
            ans.push_back(node);
            for(auto it:a[node])
            {
                outdigree[it]--;
                if(outdigree[it]==0) q.push(it);
            }
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
