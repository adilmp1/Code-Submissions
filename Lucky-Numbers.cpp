bool isLucky(int n)
{
    int x = 2;
    while (x <= n)
    {
        if (n % x == 0)
            return false;
        n -= n / x;
        x++;
    }
    return true;
}

/*
for example if we input the first list of numbers will be
1-19 
and in the first iteration we will return false if 19 is at even index (1-based indexing)

since index is 19 we will continue the iteration and increment x and 
and the list of numbers will be reduced to n - n/x and replace it with n
*/
