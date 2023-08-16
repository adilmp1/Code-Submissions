int arrayOperations(int n, vector<int> &arr)
{
    int zeroes = 0;
    int ans = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (flag)
            {
                ans++;
                flag = 0;
            }
            zeroes++;
        }
        else
        {
            flag = 1;
        }
    }
    if (zeroes == 0)
        return -1;
    if (zeroes == n)
        return 0;
    if (flag)
    {
        ans++;
    }
    return ans;
}
