vector<vector<int>> fourSum(vector<int> &a, int k)
{
    int n = a.size();
    sort(a.begin(), a.end());
    set<vector<int>> s;
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int h = n - 1;
            int g = j + 1;
            while (g < h)
            {
                int sum = a[i] + a[j] + a[g] + a[h];
                if (sum == k)
                {
                    s.insert({a[i], a[j], a[g], a[h]});
                    g++;
                    h--;
                }
                else if (sum > k)
                {
                    h--;
                }
                else
                {
                    g++;
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
    return ans;
}
