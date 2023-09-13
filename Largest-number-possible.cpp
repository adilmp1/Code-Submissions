string findLargest(int n, int s)
{
    if (s == 0 and n == 1)
        return "0";
    if (s == 0 and n > 1)
        return "-1";
    string ans;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (9 <= s - sum)
        {
            ans.push_back('9');
            sum += 9;
        }
        else if (8 <= s - sum)
        {
            ans.push_back('8');
            sum += 8;
        }
        else if (7 <= s - sum)
        {
            ans.push_back('7');
            sum += 7;
        }
        else if (6 <= s - sum)
        {
            ans.push_back('6');
            sum += 6;
        }
        else if (5 <= s - sum)
        {
            ans.push_back('5');
            sum += 5;
        }
        else if (4 <= s - sum)
        {
            ans.push_back('4');
            sum += 4;
        }
        else if (3 <= s - sum)
        {
            ans.push_back('3');
            sum += 3;
        }
        else if (2 <= s - sum)
        {
            ans.push_back('2');
            sum += 2;
        }
        else if (1 <= s - sum)
        {
            ans.push_back('1');
            sum += 1;
        }
        else if (0 <= s - sum)
        {
            ans.push_back('0');
            sum += 0;
        }
    }
    if (sum != s)
        return "-1";
    return ans;
}
