void swap(int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}
void heapify(int a[], int n, int i)
{
        int largest, left, right;
        left = 2 * i + 1;
        right = 2 * i + 2;
        largest = i;
        if (left < n && a[left] > a[largest])
        {
                largest = left;
        }
        if (right < n && a[right] > a[largest])
        {
                largest = right;
        }
        if (largest != i)
        {
                swap(a + i, a + largest);
                heapify(a, n, largest);
        }
}
void buildHeap(int a[], int n)
{
        for (int i = (n / 2) - 1; i >= 0; i--)
        {
                heapify(a, n, i);
        }
}
void heapSort(int a[], int n)
{
        buildHeap(a, n);
        for (int i = n - 1; i >= 0; i--)
        {
                swap(a, a + i);
                heapify(a, i, 0);
        }
}
