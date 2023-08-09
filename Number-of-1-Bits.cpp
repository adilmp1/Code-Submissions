int setBits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int count = 0;
    int val;
    while (n != 0)
    {
        val = n % 2;
        if (val)
        {
            count++;
        }
        n /= 2;
    }
    return count;
}
