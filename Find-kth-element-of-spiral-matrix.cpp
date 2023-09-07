int findK(int a[MAX][MAX], int n, int m, int k)
{
    int ind = 1;
    int top = 0;
    int left = 0;
    int bottom = n - 1;
    int right = m - 1;

    while (top <= bottom and left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            if (ind == k)
            {
                return a[top][i];
            }
            ind++;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            if (ind == k)
            {
                return a[i][right];
            }
            ind++;
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            if (ind == k)
            {
                return a[bottom][i];
            }
            ind++;
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            if (ind == k)
            {
                return a[i][left];
            }
            ind++;
        }
        left++;
    }
}
