int countTriplet(int a[], int n)
{
    sort(a, a + n);
    int count = 0;
    int left, right;
    for (int i = n - 1; i >= 0; i--)
    {
        left = 0;
        right = i - 1;
        while (left < right)
        {
            int sum = a[left] + a[right];
            if (sum == a[i])
            {
                count++;
                left++;
                right--;
            }
            else if (sum < a[i])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return count;
}
