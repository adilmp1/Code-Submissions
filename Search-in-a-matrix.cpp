int matSearch(vector<vector<int>> &a, int n, int m, int x)
{
    for (int i = 0; i < n; i++)
    {
        int low = 0;
        int high = m - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (a[i][mid] == x)
            {
                return 1;
            }
            else if (a[i][mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return 0;
}
