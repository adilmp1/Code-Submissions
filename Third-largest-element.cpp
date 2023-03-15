int thirdLargest(int a[], int n)
{
    sort(a, a + n);
    return a[n - 3];
}
