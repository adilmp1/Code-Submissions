bool ispar(string x)
{
    if(x.length()%2==1)
    {
        return false;
    }
    stack<char> pars;   
    for (char ch : x)
    {
        // cout<<pars.top();
        if (ch == '(' || ch == '{' || ch == '[')
        {
            pars.push(ch);
        }
        if (ch == ')')
        {
            if(pars.empty())
            {
                return false;
            }
            while(pars.top()!='(' && !pars.empty()){
                pars.pop();
            if(pars.empty())
            {
                return false;
            }
            }
            if(pars.top()=='(')
            {
                pars.pop();
            }

        }
        if (ch == ']')
        {
            if(pars.empty())
            {
                return false;
            }
            while(pars.top()!='[' && !pars.empty()){
                pars.pop();
                if(pars.empty())
                {
                    return false;
                }
            }
            if(pars.top()=='[')
            {
                pars.pop();
            }
        }
        if (ch == '}')
        {
            if(pars.empty())
            {
                return false;
            }
            while(pars.top()!='{' && !pars.empty()){
                pars.pop();
                if(pars.empty())
                {
                    return false;
                }
            }
            if(pars.top()=='{')
            {
                pars.pop();
            }
        }
    }
    return pars.empty();
}
