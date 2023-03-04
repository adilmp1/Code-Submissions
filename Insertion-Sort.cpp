void insertionSort(int a[], int n)
{
    int i = 1, j, v;
    while (i < n)
    {
        v = a[i];
        j = i;
        while (a[j - 1] > v && j > 0)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = v;
        i++;
    }
}
