bool isPowerofTwo(long long n)
{
    if (n == 0)
        return false;
    for (long long i = 2; i < n; i *= 2)
    {
        if (n % i)
        {
            return false;
        }
    }
    return true;
}
