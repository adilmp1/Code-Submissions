int distributeTicket(int n, int k)
{
    int i = 1;
    int j = n;
    int flag = 1;
    int count = k;
    while (i <= j)
    {
        if (i == j)
        {
            return i;
        }
        else if (flag)
        {
            i++;
            count--;
            if (count == 0)
            {
                count = k;
                flag = !flag;
            }
        }
        else
        {
            count--;
            j--;
            if (count == 0)
            {
                count = k;
                flag = !flag;
            }
        }
    }
    return i;
}
