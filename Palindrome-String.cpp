int isPalindrome(string str)
{
    int len = str.length();
    int i;
    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
