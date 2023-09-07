void merge(long long arr[], int lb, int mid, int ub, long long int *ans)
{
    int i, j;
    vector<long long> temp;
    i = lb;
    j = mid + 1;
    int te;
    int count = 0;
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
            (*ans) += mid - i + 1;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= ub)
    {
        temp.push_back(arr[j]);
        j++;
    }
    int ind = 0;
    for (te = lb; te <= ub; te++)
    {
        arr[te] = temp[ind++];
    }
}
void mergeSort(long long arr[], int lb, int ub, long long int *ans)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid, ans);
        mergeSort(arr, mid + 1, ub, ans);
        merge(arr, lb, mid, ub, ans);
    }
}

long long int inversionCount(long long a[], long long n)
{
    long long int ans = 0;
    mergeSort(a, 0, n - 1, &ans);
    return ans;
}
