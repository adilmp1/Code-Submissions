int countZeroes(int a[], int n)
{
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            count++;
        }
        else
        {
            return count;
        }
    }
    return count;
}
