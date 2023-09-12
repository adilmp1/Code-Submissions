string reverseWords(string s)
{
    stack<string> st;
    int n = s.size();
    string temp;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '.')
        {
            temp.push_back(s[i]);
        }
        else
        {
            st.push(temp);
            temp = "";
        }
    }
    st.push(temp);
    string ans;
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
        ans.push_back('.');
    }
    ans.pop_back();
    return ans;
}
