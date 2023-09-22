vector<int> nextPermutation(int n, vector<int> a)
{
    if (a[n - 1] > a[n - 2])
    {
        swap(a[n - 1], a[n - 2]);
        return a;
    }
    int ind = n - 2;
    for (int i = n - 1; i > 0 && a[i] < a[i - 1]; i--)
    {
        ind = i;
    }
    if (ind == 1)
    {
        reverse(a.begin(), a.end());
        return a;
    }
    ind--;
    int leftElement = a[ind - 1];
    int rightJustGreater = -1;
    for (int i = ind; i < n; i++)
    {
        if (a[i] > leftElement)
        {
            if (rightJustGreater == -1 or a[i] < a[rightJustGreater])
            {
                rightJustGreater = i;
            }
        }
    }
    int temp = a[ind - 1];
    a[ind - 1] = a[rightJustGreater];
    a[rightJustGreater] = temp;
    sort(a.begin() + ind, a.end());
    return a;
}
