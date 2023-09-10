int findSum(int a[], int n)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
    }
    return mini + maxi;
}
