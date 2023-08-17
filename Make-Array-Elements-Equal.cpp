long long int minOperations(int N)
{
    if (N == 1)
    {
        return 0;
    }
    if (N == 2)
    {
        return 1;
    }
    long long int ans = N / 2;
    if (N % 2 == 0)
    {
        return ans * ans;
    }
    return ans * (ans + 1);
}
