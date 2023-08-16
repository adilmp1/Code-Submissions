int findCatalan(int n)
{
    int answer;
    int large = 1e9 + 7;
    vector<long long int> ans(n + 1, 0);
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        ans[0] = 1;
        ans[1] = 1;
        for (int k = 2; k <= n; k++)
        {
            int j = 0;
            int i = k - 1;
            while (j < k && i >= 0)
            {
                ans[k] = (ans[k] + (ans[i] * ans[j]) % large) % large;
                j++;
                i--;
            }
        }
    }
    return ans[n];
}
