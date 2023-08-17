unsigned int getFirstSetBit(int n)
{
    int i = 0;
    int val;
    while (n)
    {
        val = n % 2;
        i++;
        if (val)
        {
            return i;
        }
        n /= 2;
    }
    return i;
}
