    vector<int> ans;
    void helper(int n,int real)
    {
            ans.push_back(n);
            if(n<=0 || n>real)
            {
                    return;
            }
            helper(n-5,real);
            ans.push_back(n);
    }
    vector<int> pattern(int n)
    {
            helper(n,n);
            return ans;
    }
