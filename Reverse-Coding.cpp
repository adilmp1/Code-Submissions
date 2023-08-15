int sumOfNaturals(int n)
{
    int large = (int)1e9 + 7;
    int sum = ((n * 1LL * (n + 1)) / 2) % large;
    return sum;
}
