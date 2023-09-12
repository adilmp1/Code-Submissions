vector<int> max_of_subarrays(int *a, int n, int k)
{
    list<int> s;
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < n)
    {
        while (s.size() != 0 and s.back() < a[i])
        {
            s.pop_back();
        }
        s.push_back(a[i]);
        if (i < k - 1)
        {
            i++;
        }
        else
        {
            ans.push_back(s.front());
            if (a[j] == s.front())
            {
                s.pop_front();
            }
            j++;
            i++;
        }
    }
    return ans;
}
