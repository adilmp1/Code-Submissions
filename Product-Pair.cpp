bool isProduct(int a[], int n, long long x)
{
    unordered_map<float, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[(float)a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0 && x % a[i] == 0)
        {
            float div = x / a[i];
            // if sum is a prefect square and its root appears twice in the array we
            // have to check that condition (code below)
            if (div == a[i] && mp[div] > 1)
                return true;
            if (div != a[i] && mp[div] >= 1)
                return true;
        }
    }
    return false;
}
