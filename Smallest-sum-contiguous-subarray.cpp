int smallestSumSubarray(vector<int> &a)
{
    int n = a.size();
    int i = 0;
    int j = 1;
    int sum = a[i];
    int ans = sum;
    while (j < n)
    {
        if (sum > 0)
        {
            sum = 0;
        }
        sum += a[j];
        // cout<<sum<<endl;
        ans = min(ans, sum);
        j++;
    }
    return ans;
}
