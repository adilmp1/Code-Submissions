vector<int> leaders(int a[], int n)
{
    vector<int> v;
    int leader = a[n - 1];
    v.push_back(leader);
    int i;
    for (i = n - 2; i >= 0; i--)
    {
        if (a[i] >= leader)
        {
            leader = a[i];
            v.push_back(leader);
        }
    }
    reverse(v.begin(), v.end());
    return v;
}
