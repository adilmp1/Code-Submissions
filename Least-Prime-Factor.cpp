int leastPrimeFactorFinder(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return 2;
    }
    int factor = n;
    int n_copy = n;
    for (int i = 2; i * i <= n_copy; i++)
    {
        while (n % i == 0)
        {
            factor = min(factor, i);
            n /= i;
        }
    }
    return factor;
}
vector<int> leastPrimeFactor(int n)
{
    vector<int> ans;
    ans.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(leastPrimeFactorFinder(i));
    }
    return ans;
}
