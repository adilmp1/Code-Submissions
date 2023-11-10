    string printMinNumberForPattern(string s)
    {
        int n = s.size();
        string ans="";
        stack<int> st;
        for(int i=0;i<=n;i++)
        {
            st.push(i+1);
            if(s[i]=='I' or i==n)
            {
                while(!st.empty())
                {
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
        return ans;
    }
