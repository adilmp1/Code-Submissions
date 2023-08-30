int Countpair(int a[], int n, int k)
{
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i < j)
    {
        if (a[i] + a[j] == k)
        {
            i++;
            j--;
            count++;
        }
        else if (a[i] + a[j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    if (!count)
        return -1;
    return count;
}
