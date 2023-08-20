int remove_duplicate(int a[], int n)
{
    int i = 0;
    int index = -1;
    int uniqueElements = n;
    bool nextIndex = false;
    while (i < n - 1)
    {
        if (a[i] == a[i + 1])
        {
            int temp = a[i];
            while (a[i + 1] == temp)
            {
                a[i + 1] = 0;
                i++;
                uniqueElements--;
            }
        }
        i++;
    }
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[ind++] = a[i];
        }
    }
    return uniqueElements;
}
