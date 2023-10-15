	int isRepeat(string s)
  {
	    string str = s;
	    str+=s;
	    str.pop_back();
	    str = str.substr(1,str.size()-1);
	    for(int i=0;i<str.size();i++)
	    {
	        if(str[i]==s[0] and str.substr(i,s.size())==s)
	        {
	            return true;
	        }
	    }
	    return false;
	}
