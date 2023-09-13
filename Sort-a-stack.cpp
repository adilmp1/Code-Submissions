void SortedStack ::sort()
{
    multiset<int> st;
    while (!s.empty())
    {
        st.insert(s.top());
        s.pop();
    }
    for (auto it : st)
    {
        s.push(it);
    }
}
