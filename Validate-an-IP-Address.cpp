    int isValid(string s) 
    {
            int n = s.size();
            int i=0;
            int temp=-1;
            int size=0;
            int start=0;
            int dots=0;
            while(i<n)
            {
                if(s[i]!='.')
                {
                    if(!isdigit(s[i])) return 0;
                    if(temp==-1) temp=0;
                    temp = (temp*10)+(s[i]-'0');
                    size++;
                }
                else
                {
                    if(s[start]=='0' and size>1) return 0;
                    if(!(temp>=0 and temp<=255) || size>=4)
                    {
                        return 0;
                    }
                    temp=-1;
                    size=0;
                    start=i+1;
                    dots++;
                }
                i++;
            }
            if(s[start]=='0' and size>1) return 0;
            if(!(temp>=0 and temp<=255) || size>=4)
            {
                return 0;
            }
            return dots==3;
            return 1;
  }
