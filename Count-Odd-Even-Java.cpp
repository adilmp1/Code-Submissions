void countOddEven(int a[], int n)
{
    long long int count = 0;
    for (long long int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            count++;
        }
    }
    cout << count << " " << n - count;
}
