int kthSmallest(int arr[], int l, int r, int k)
{
    sort(arr + l, arr + r + 1);
    return arr[k - 1];
}
