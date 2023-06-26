void binSort(int A[], int n)
{
    int a[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
        {
            a[k++] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 1)
        {
            a[k++] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = a[i];
    }
}
