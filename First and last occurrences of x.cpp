vector<int> find(int a[], int n, int x)
{
    vector<int> map;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag = 1;
            map.push_back(i);
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == x)
        {
            flag = 1;
            map.push_back(i);
            break;
        }
    }
    if (flag == 0)
    {
        map.push_back(-1);
        map.push_back(-1);
        return map;
    }
    return map;
}
