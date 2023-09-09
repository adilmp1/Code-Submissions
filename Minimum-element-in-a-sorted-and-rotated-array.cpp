int findMin(int a[], int n)
{
    int low = 0;
    int high = n - 1;
    if (a[low] < a[high])
        return a[low];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] > a[mid + 1])
        {
            return a[mid + 1];
        }
        if (a[mid] > a[mid + 1])
        {
            return a[mid + 1];
        }
        else if (a[mid - 1] > a[mid])
        {
            return a[mid];
        }
        else if (a[low] <= a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}
