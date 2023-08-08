int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return gcd(b, a % b);
}
int countFractions(int n, int numerator[], int denominator[])
{
    int count = 0;
    map<pair<int, int>,int> mp;
    for (int i = 0; i < n; i++)
    {
        int x = numerator[i];
        int y = denominator[i];
        int gd = gcd(x, y);
        x /= gd;
        y /= gd;
        if (mp.find({y - x, y}) != mp.end())
        {
            count += mp[{y - x, y}];
        }
        mp[{x, y}]++;
    }
    return count;
}
