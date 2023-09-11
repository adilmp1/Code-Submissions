void QueueStack ::push(int x)
{
    q1.push(x);
}

int QueueStack ::pop()
{
    if (q1.empty())
        return -1;
    int val = -1;
    while (!q1.empty())
    {
        val = q1.front();
        q2.push(val);
        q1.pop();
    }
    while (!q2.empty())
    {
        int temp = q2.front();
        q2.pop();
        if (!q2.empty())
        {
            q1.push(temp);
        }
    }
    return val;
}
