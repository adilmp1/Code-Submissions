    int noOfDistinctSubsequences(string s)
    {
        int n = s.size();
        vector<int> dp(n+1,0);
        dp[0]=1;
        unordered_map<char,int> mp;
        for(int i=1;i<=n;i++)
        {
            dp[i]=2*dp[i-1];
            if(mp.count(s[i-1]))
            {
                dp[i]=dp[i]-dp[mp[s[i-1]]-1];
            }
            mp[s[i-1]]=i;
        }
        return dp[n];
    }
    string betterString(string str1, string str2) 
    {  
        int v1 = noOfDistinctSubsequences(str1);
        int v2 = noOfDistinctSubsequences(str2);
        return (v1>=v2)?str1:str2;
    }
