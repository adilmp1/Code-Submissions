int search(string text, string pat)
{
    int n = text.size();
    for (int i = 0; i < n; i++)
    {
        if (text[i] == pat[0])
        {
            int ind = 0;
            int start = i;
            while (ind < pat.size() and text[i] == pat[ind])
            {
                ind++;
                i++;
            }
            if (ind == pat.size())
                return 1;
            i = start;
        }
    }
    return 0;
}
