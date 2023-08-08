int print2largest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int secondMax = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}
