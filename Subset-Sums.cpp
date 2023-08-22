vector<int> subsetSums(vector<int> a, int n)
{
    vector<int> ans;
    int totalSubsets = 1 << n;
    ans.push_back(0);
    for (int i = 1; i < totalSubsets; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += a[j];
            }
        }
        ans.push_back(sum);
    }
    return ans;
}
