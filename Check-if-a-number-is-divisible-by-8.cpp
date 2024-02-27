    int DivisibleByEight(string s)
    {
        if(s.size()<3)
        {
            if(stoi(s)%8==0) return 1;
            return -1;
        }
        else
        {
            int temp=0;
            for(int i=s.size()-3;i<s.size();i++)
            {
                temp=(temp*10)+s[i]-'0';
            }
            if(temp%8==0) return 1;
            return -1;
        }
