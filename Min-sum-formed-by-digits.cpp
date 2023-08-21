long long int minSum(int a[], int n)
{
    std::sort(a, a + n);
    long long int n1 = 0, n2 = 0;
    bool chance = true;
    for (int i = 0; i < n; i++)
    {
        if (chance)
        {
            n1 = n1 * 10 + a[i];
            chance = !chance;
        }
        else
        {
            n2 = n2 * 10 + a[i];
            chance = !chance;
        }
    }
    long long int ans = n1 + n2;
    return ans;
}
