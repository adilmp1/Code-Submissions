vector<int> makeBeautiful(vector<int> a)
{
    vector<int> ans;
    int n = a.size();
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            s.push(a[i]);
        }
        else
        {
            if (a[i] >= 0 and s.top() < 0 || a[i] < 0 and s.top() >= 0)
            {
                s.pop();
            }
            else
            {
                s.push(a[i]);
            }
        }
    }
    while (!s.empty())
    {
        ans.insert(ans.begin(), s.top());
        s.pop();
    }
    return ans;
}
