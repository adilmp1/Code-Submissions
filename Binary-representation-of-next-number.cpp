  string removeTrailingOnes(string s)
  {
      int idx=0;
      if(s[idx]!='0') return s;
      while(s[idx]=='0' and idx<s.size()) idx++;
      if(idx==s.size()) return "0";
      int remaining = s.size()-idx;
      return s.substr(idx,remaining);
  }
    string binaryNextNumber(string s) {
        s=removeTrailingOnes(s);
        
        int last=s.size();
        if(s[last-1]=='0') 
        {
            s[last-1]='1';
            return s;
        }
        int idx=last-1;
        s[idx]='0';
        idx--;
        while(idx>=0 and s[idx]=='1')
        {
            s[idx]='0';
            idx--;
        }
        if(idx<0)
        {
            string ans="1";
            ans+=s;
            return ans;
        }
        s[idx]='1';
        return s;
    }
