int findLongestConseqSubseq(int a[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (!s.count(a[i] - 1) and s.count(a[i] + 1))
        {
            int val = a[i];
            while (s.count(val))
            {
                val++;
            }
            ans = max(ans, val - a[i]);
        }
    }
    return ans;
}
