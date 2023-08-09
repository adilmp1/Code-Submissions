long long int largestPrimeFactor(int N)
{
    long long int i, ans = 0;
    if (N == 4)
    {
        ans = 2;
        return ans;
    }
    int val = N;
    for (i = 2; i * i < val; i++)
    {
        while (N % i == 0)
        {
            ans = i > ans ? i : ans;
            N /= i;
        }
    }
    if (N > 1 && N > ans)
    {
        ans = N;
    }
    return ans;
}
