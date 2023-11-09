    int maxSubStr(string s)
    {
        int temp=0;
        int count=0;
        int lastIdx=0;
        for(int i=0;i<s.size();i++)
        {
            
            if(s[i]=='0') temp--;
            if(s[i]=='1') temp++;
            if(temp==0)
            {
                count++;
            }
        }
        if(temp!=0) return -1;
        return count;
    }
