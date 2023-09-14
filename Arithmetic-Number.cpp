int inSequence(int a, int b, int c)
{
    if (a == b)
        return 1;
    if (c == 0 and a != b)
        return 0;
    bool val = (b - a) % c == 0;
    if (val)
    {
        return ((b - a) / c) > 0;
    }
    return 0;
}
