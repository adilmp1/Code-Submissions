string longestPalin(string s)
{
    if (s.size() == 1)
        return s;
    string ans;
    ans.push_back(s[0]);
    int l, r;
    int l1, r1;
    l = r = -1;
    int maxi = 0;
    // checking whether any two contiguos characters are same 
    // if they are same move the left pointer towards left side and the right pointer towards the right side as long as the characters at left and right pointer are same 
    // this will get the longest even palindrome string
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            l1 = i;
            r1 = i + 1;
            while (s[l1] == s[r1] and r1 < s.size() and l1 >= 0)
            {
                l1--;
                r1++;
            }
            l1++;
            r1--;
            if ((r1 - l1 + 1) > maxi)
            {
                maxi = r1 - l1 + 1;
                l = l1;
                r = r1;
            }
        }
    }
  
    // checking whether ith character and i+1 th character are same 
    // same technique as above but for odd palindromes
    for (int i = 0; i < s.size() - 2; i++)
    {
        if (s[i] == s[i + 2])
        {
            l1 = i;
            r1 = i + 2;
            while (s[l1] == s[r1] and r1 < s.size() and l1 >= 0)
            {
                l1--;
                r1++;
            }
            l1++;
            r1--;
            if ((r1 - l1 + 2) > maxi)
            {
                maxi = r1 - l1 + 2;
                l = l1;
                r = r1;
            }
        }
    }
    if (l == -1 and r == -1)
        return ans;
    return s.substr(l, r - l + 1);
}
