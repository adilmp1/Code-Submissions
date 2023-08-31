int search(int a[], int n)
{

    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] != a[mid - 1] and a[mid] != a[mid + 1])
        {
            return a[mid];
        }
        else if (a[mid] == a[mid - 1])
        {
            if ((mid + 1) % 2 == 0)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        else if (a[mid] == a[mid + 1])
        {
            if ((mid + 1) % 2 == 1)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
}
