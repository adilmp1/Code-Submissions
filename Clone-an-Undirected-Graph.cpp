    Node* cloneGraph(Node* node) 
    {
        if(!node) return NULL;
        unordered_map<Node*,Node*> mp;
        queue<Node*> q;
        mp[node] = new Node(node->val);
        q.push(node);
        while(!q.empty())
        {
            Node * temp = q.front();
            q.pop();
            for(auto&x :temp->neighbors)
            {
                if(!mp.count(x))
                {
                    mp[x] = new Node(x->val);
                    q.push(x);
                }
                mp[x]->neighbors.push_back(mp[temp]);
            }
        }
        return mp[node];
    }
