void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort012(int a[], int n)
{
    int i, k = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            swap(a + k, a + i);
            k++;
        }
    }
    for (i = k; i < n; i++)
    {
        if (a[i] == 1)
        {
            swap(a + k, a + i);
            k++;
        }
    }
    for (i = k; i < n; i++)
    {
        if (a[i] == 2)
        {
            swap(a + k, a + i);
            k++;
        }
    }
}
