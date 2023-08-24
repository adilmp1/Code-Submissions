long long maxProduct(int a[], int n)
{
    sort(a, a + n);
    long long max1 = a[n - 1];
    long long max2 = a[n - 2];
    long long max3 = a[n - 3];
    long long min1 = a[0];
    long long min2 = a[1];
    return max(max1 * max2 * max3, max1 * min1 * min2);
}
