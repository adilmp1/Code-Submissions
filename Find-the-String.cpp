    void helper(string& ans,unordered_map<string,int>& mp,int k,int n)
    {
        for(int i=k-1;i>=0;i--)
        {
            ans+=to_string(i);
            int temp = ans.size()-n;
            string temp2=ans.substr(temp,n);
            if(mp.find(temp2)==mp.end())
            {
                mp[temp2]++;
                helper(ans,mp,k,n);
            }
            else
            {
                ans.pop_back();
            }
        }
        return;
    }
    string findString(int n, int k) 
    {
        string ans="";
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            ans+=to_string(0);
        }
        mp[ans]++;
        helper(ans,mp,k,n);
        return ans;
    }
