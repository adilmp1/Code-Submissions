        vector <int> search(string pattern, string text)
        {
            vector<int> ans;
            for(int i=0;i<text.size();i++)
            {
                if(pattern[0]==text[i])
                {
                    if(text.substr(i,pattern.size())==pattern) ans.push_back(i+1);
                }
            }
            return ans;
        }
