void segregateElements(int arr[], int n)
{
    int a[n];
    int i, k = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            a[k++] = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            a[k++] = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }
}
