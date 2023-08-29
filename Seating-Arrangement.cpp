bool is_possible_to_get_seats(int m, int n, vector<int> &a)
{
    int count = 0;
    for (int i = 0; i < n && count < m; i++)
    {
        if (a[i] == 0)
        {
            if (i == 0 && a[i + 1] == 0 || i == n - 1 && a[i - 1] == 0)
            {
                a[i] = 1;
                count++;
            }
            else if (a[i + 1] == 0 and a[i - 1] == 0)
            {
                a[i] = 1;
                count++;
            }
        }
    }
    return count == m;
}
