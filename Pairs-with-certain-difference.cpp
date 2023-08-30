int maxSumPairWithDifferenceLessThanK(int a[], int n, int k)
{
    sort(a, a + n, greater<int>());
    int i = 0;
    int j = i + 1;
    int ans = 0;
    while (j < n)
    {
        int diff = a[i] - a[j];
        int sum = a[i] + a[j];
        if (diff < k)
        {
            ans += sum;
            i += 2;
            j += 2;
        }
        else
        {
            i++;
            j++;
        }
    }
    return ans;
}
