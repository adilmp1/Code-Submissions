void Rearrange(int a[], int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            temp.push_back(a[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            temp.push_back(a[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
    temp.clear();
}
