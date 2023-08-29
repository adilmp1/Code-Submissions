int countBuildings(int a[], int n)
{
    int max = INT_MIN;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            count++;
        }
    }
    return count;
}
