    vector<int> recamanSequence(int n)
    {
        unordered_map<int,int> mp;
        if(n==0) return {};
        vector<int> ans;
        ans.push_back(0);
        if(n==1) return ans;
        for(int i=1;i<n;i++)
        {
            int val=ans.back()-i;
            if(val<=0 || mp.count(val)) val=ans.back()+i;
            mp[val]=1;
            ans.push_back(val);
        }
        return ans;
    }
