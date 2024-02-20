    bool helper(int idx,string A,unordered_set<string>& myset)
    {
        if(idx==A.length()) return true;
        string temp="";
        bool a = false;
        for(int i=idx;i<A.length();i++)
        {
            temp.push_back(A[i]);
            if(myset.find(temp)!=myset.end())
            {
                a = a|helper(i+1,A,myset);
            }
        }
        return a;
    }
    
    int wordBreak(int n, string A, vector<string> &d) 
    {
        unordered_set<string> myset;
        for(auto x:d) myset.insert(x);
        return helper(0,A,myset);
    }
