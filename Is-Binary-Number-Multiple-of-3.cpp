int isDivisible(string str)
{
    int sum=0;
    int temp=0;
    for(int i=str.size()-1;i>=0;i--)
    {
        temp++;
        if(str[i]-'0')
        {
            if(temp%2)
            {
                sum+=1;
            }
            else
            {
                sum+=2;
            }
        }
    }
    if(sum%3)
    {
        return 0;
    }
    return 1;
}
