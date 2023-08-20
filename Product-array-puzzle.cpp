vector<long long int> productExceptSelf(vector<long long int> &a, int n)
{
    long long int product = 1;
    vector<long long int> ans;
    int zeroes = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i])
        {
            product *= a[i];
        }
        else
        {
            zeroes++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (zeroes)
        {
            if (a[i])
            {
                ans.push_back(0);
            }
            else
            {
                if (zeroes == 1)
                {
                    ans.push_back(product);
                }
                else
                {
                    ans.push_back(0);
                }
            }
        }
        else
        {

            ans.push_back(product / a[i]);
        }
    }
    return ans;
}
