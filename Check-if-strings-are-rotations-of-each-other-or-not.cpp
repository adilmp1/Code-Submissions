    bool areRotations(string s1,string s2)
    {
        if(s1==s2) return true;
        int n = s1.length();
        while(n--)
        {
            char c = s1[0];
            s1.erase(s1.begin());
            s1.push_back(c);
            if(s1==s2) return true;
        }
        return false;
    }
