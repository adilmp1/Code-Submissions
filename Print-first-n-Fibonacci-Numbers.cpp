vector<long long> printFibb(int n)
{
    vector<long long> ans;
    long long a = 0;
    long long b = 1;
    long long c = 0;
    for (int i = 1; i <= n; i++)
    {
        a = b + c;
        b = c;
        c = a;
        ans.push_back(a);
    }
    return ans;
}
