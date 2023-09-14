void push(stack<int> &s, int a)
{
    s.push(a);
}

bool isFull(stack<int> &s, int n)
{
    return s.size() == n;
}

bool isEmpty(stack<int> &s)
{
    return s.size() == 0;
}

int pop(stack<int> &s)
{
    if (isEmpty(s))
        return -1;
    return s.top();
    s.pop();
}

int getMin(stack<int> &s)
{
    int mini = 99999999;
    while (!s.empty())
    {
        mini = min(mini, s.top());
        s.pop();
    }
    return mini;
}
