    bool isRotated(string s1, string s2)
    {
        int n = s1.size();
        int len=n-2;
        if(s2.substr(0,len)==s1.substr(2,len) and s2.substr(len,2)==s1.substr(0,2)) return true;
        if(s1.substr(0,len)==s2.substr(2,len) and s1.substr(len,2)==s2.substr(0,2)) return true;
        return false;
    }
