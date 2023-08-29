int equalSum(int n, vector<int> &a)
{
    if (n == 1)
        return 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int tempSum = 0;
    for (int i = 0; i < n; i++)
    {
        tempSum += a[i];
        if (tempSum == sum - tempSum - a[i + 1])
        {
            return i + 2;
        }
    }
    return -1;
}
