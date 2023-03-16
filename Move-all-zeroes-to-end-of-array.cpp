void pushZerosToEnd(int a[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j++] = a[i];
        }
    }
    while (j < n)
    {
        a[j] = 0;
        j++;
    }
}
