void merge(int arr[], int lb, int mid, int ub)
{
    int i, j, k, temp[1000000];
    i = lb;
    j = mid + 1;
    k = lb;
    int te;
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= ub)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (te = lb; te <= ub; te++)
    {
        arr[te] = temp[te];
    }
}
void mergeSort(int arr[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}
