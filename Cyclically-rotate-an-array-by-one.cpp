void rotate(int arr[], int n)
{
    int a[n];
    a[0] = arr[n - 1];
    int k = 1;
    for (int i = 0; i < n - 1; i++)
    {
        a[k++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }
}
