int columnWithMaxZeros(vector<vector<int>> a, int n)
{
    int maxz = INT_MIN;

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] == 0)
            {
                count++;
            }
        }
        if (count > maxz)
        {
            maxz = count;
            ans = i;
        }
    }
    return ans;
}
