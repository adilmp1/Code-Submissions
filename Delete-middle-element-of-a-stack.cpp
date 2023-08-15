void deleteMid(stack<int> &s, int sizeOfStack)
{
    int index = (floor((sizeOfStack + 1) / 2)) - 1;
    int ind = 0;
    int a[sizeOfStack - 1];
    while (!s.empty())
    {
        if (s.size() != index + 1)
        {
            a[ind++] = s.top();
        }
        s.pop();
    }
    for (int i = sizeOfStack - 2; i >= 0; i--)
    {
        s.push(a[i]);
    }
}
