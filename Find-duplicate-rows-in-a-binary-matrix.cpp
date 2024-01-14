    vector<int> repeatedRows(vector<vector<int>> &a, int m, int n) 
    { 
        unordered_map<string,int> mp;
        vector<int> ans;
        for(int i=0;i<m;i++)
        {
            string temp="";
            for(int j=0;j<n;j++)
            {
                temp+=to_string(a[i][j]);
            }
            if(mp.count(temp))
            {
                ans.push_back(i);
            }
            else
            {
                mp[temp]=1;
            }
        }
        return ans;
    } 
