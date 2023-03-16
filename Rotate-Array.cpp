void rotateArr(int arr[], int d, int n)
{
    int a[n];
    int k = 0;
    if (d > n)
    {
        d = d % n;
    }
    for (int i = d; i < n; i++)
    {
        a[k++] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        a[k++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }
}
