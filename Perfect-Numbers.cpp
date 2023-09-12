int isPerfectNumber(long long n)
{
    if (n == 1)
        return 0;
    long long sum = 1;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
    if (sum == n)
        return 1;
    return 0;
}
