vector<int> increment(vector<int> a, int n)
{
    if (a[n - 1] != 9)
    {
        a[n - 1]++;
        return a;
    }
    int c = 1;
    int val;
    for (int i = n - 1; i >= 0; i--)
    {
        val = a[i] + c;
        a[i] = val % 10;
        if (val == 10)
        {
            c = 1;
        }
        else
        {
            c = 0;
        }
    }
    if (val == 10)
    {
        a.insert(a.begin(), 1);
    }
    return a;
}
