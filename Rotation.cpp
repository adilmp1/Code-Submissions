int findKRotation(int a[], int n)
{
    int smallest = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[smallest])
        {
            smallest = i;
        }
    }
    return smallest;
}
