void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int a[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            swap(a + i, a + min);
        }
    }
}
