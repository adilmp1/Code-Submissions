    vector<int> Series(int n) {
        vector<int> ans;
        ans.push_back(0);
        if(n==0) return ans;
        ans.push_back(1);
        if(n==1) return ans;
        long mod = 1e9+7;
        for(int i=2;i<=n;i++)
        {
            int val = (ans[i-1]+ans[i-2])%mod;
            ans.push_back(val);
        }
        return ans;
    }
