int findElement(int a[], int n)
{
    int leftMax[n];
    int rightMin[n];
    int temp = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        leftMax[i] = max(temp, a[i]);
        temp = leftMax[i];
    }
    temp = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        rightMin[i] = min(temp, a[i]);
        temp = rightMin[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (leftMax[i] == rightMin[i])
        {
            return leftMax[i];
        }
    }
    return -1;
}
