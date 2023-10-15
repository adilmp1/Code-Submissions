    int atoi(string str) 
    {
        int ans=0;  
        int k=0;
        int flag=false;
        if(str[0]=='-')
        {
            k++;
            flag=true;
        }
        for(int i=k;i<str.size();i++)
        {
            if(isdigit(str[i]))
            {
                ans=ans*10 + str[i]-'0';
            }   
            else
            {
                return -1;
            }
        }
        if(flag) ans*=-1;
        return ans;
    }
