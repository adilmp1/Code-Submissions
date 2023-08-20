int binarySearch(int a[], int f, int l, int x)
{
    while (f <= l)
    {
        int mid = (f + l) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            l = mid - 1;
        }
        else
        {
            f = mid + 1;
        }
    }
    return -1;
}
int count(int a[], int n, int x)
{
    int index = binarySearch(a, 0, n - 1, x);
    if (index == -1)
        return 0;
    int first, last;
    int i = index;
    while (a[i] == x && i < n)
    {
        i++;
    }
    last = i - 1;
    i = index;
    while (a[i] == x && i >= 0)
    {
        i--;
    }
    first = i + 1;
    return (last - first + 1);
}
