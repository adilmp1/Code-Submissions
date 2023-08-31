vector<int> kLargest(int a[], int n, int k)
{
    vector<int> ans;
    sort(a, a + n, greater<int>());
    for (int i = 0; i < k; i++)
    {
        ans.push_back(a[i]);
    }
    return ans;
}
