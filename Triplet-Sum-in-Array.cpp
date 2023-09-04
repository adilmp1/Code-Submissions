bool find3Numbers(int a[], int n, int x)
{
    int i = 0;
    sort(a, a + n);
    int sum;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            sum = a[i] + a[j] + a[k];
            if (sum == x)
            {
                return true;
            }
            else if (sum > x)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return false;
}
