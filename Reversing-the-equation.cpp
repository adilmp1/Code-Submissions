string reverseEqn(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }
    string ans;
    int i = 0;
    char c;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
        if (!st.empty())
        {
            char ch = st.top();
            if (isdigit(ans.back()) && isdigit(ch))
            {
                string temp;
                temp.push_back(ans.back());
                ans = ans.substr(0, ans.length() - 1);
                while (!(st.empty()) && isdigit(st.top()))
                {
                    temp.push_back(st.top());
                    st.pop();
                }
                for (int i = temp.size() - 1; i >= 0; i--)
                {
                    ans.push_back(temp[i]);
                }
            }
        }
    }
    return ans;
}
