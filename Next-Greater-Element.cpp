vector<long long> nextLargerElement(vector<long long> a, int n)
{
    vector<long long> val;
    for (int i = 0; i < n; i++)
    {
        val.push_back(-1);
    }
    stack<long long> ng;
    long long big = a[0];
    int i = 0;
    while (i < n)
    {
        if (big >= a[i])
        {
            ng.push(i);
            big = a[ng.top()];
            i++;
        }
        else
        {
            val[ng.top()] = a[i];
            ng.pop();
            if (!ng.empty())
            {
                big = a[ng.top()];
            }
            else
            {
                ng.push(i);
                big = a[ng.top()];
            }
        }
    }
    return val;
}
