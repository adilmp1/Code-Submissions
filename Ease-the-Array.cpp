void modifyAndRearrangeArr(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != 0 && a[i + 1] == a[i])
        {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[ind++]);
        }
    }
}
