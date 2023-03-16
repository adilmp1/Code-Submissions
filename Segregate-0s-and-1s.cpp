void segregate0and1(int[] a, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[j++] = 0;
        }
    }
    while (j < n)
    {
        a[j++] = 1;
    }
}
