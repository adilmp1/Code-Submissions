    bool checkPangram (string s) 
    {
        set<char> a;
        int n = s.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(isalpha(tolower(s[i]))) a.insert(tolower(s[i]));
            if(a.size()==26) return true;
        }
        return false;
    }
