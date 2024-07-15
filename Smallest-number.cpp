string smallestNumberHelper(int s, int d, string str, int currsum)
{
    if (d <= 0)
        return str;
    if (s <= (9 * (d - 1)))
    {
        if(str.size())
        {
            str.push_back('0');
            return smallestNumberHelper(s, d - 1, str, currsum + 1);
        }
        str.push_back('1');
        return smallestNumberHelper(s-1, d - 1, str, currsum + 1);
    }
    if (to_string(s).size() == 1)
    {
        str += to_string(s);
        return smallestNumberHelper(0, d - 1, str, currsum + 1);
    }
    int val = s % 9;
    if (val > 0)
    {
        str += to_string(val);
        s -= val;
    }
    else
    {
        str += to_string(9);
        s -= 9;
    }
    return smallestNumberHelper(s, d - 1, str, currsum + 1);

}
string smallestNumber(int s, int d)
{
    string ans = "";
    if (s > (9 * d))
        return "-1";
    int target = s;
    if (s <= (9 * (d - 1)))
        return smallestNumberHelper(s, d, "", 0);
    for (int i = 0; i < d; i++)
    {
        int val = target % 9;
        if (val > 0)
        {
            ans += to_string(val);
            target -= val;
        }
        else
        {
            ans += to_string(9);
            target -= 9;
        }
    }
    return ans;
}
