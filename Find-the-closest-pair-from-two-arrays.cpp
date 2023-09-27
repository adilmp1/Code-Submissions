vector<int> printClosest(int a[], int b[], int n, int m, int x)
{
    vector<int> ans;
    int diff = INT_MAX;
    int i = 0;
    int j = m - 1;
    while (i < n and j >= 0)
    {
        int sum = a[i] + b[j];
        if (abs(sum - x) < diff)
        {
            diff = abs(sum - x);
            ans = {a[i], b[j]};
        }
        if (sum >= x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return ans;
}
