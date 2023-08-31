void heapify(vector<int> &a, int n, int i)
{
    int L = 2 * i + 1;
    int R = 2 * i + 2;
    int largest = i;
    if (L < n and a[L] > a[largest])
    {
        largest = L;
    }
    if (R < n and a[R] > a[largest])
    {
        largest = R;
    }
    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}
vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        ans.push_back(b[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        heapify(ans, ans.size(), i);
    }
    return ans;
}
