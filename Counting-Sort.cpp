    string countSort(string s){
        vector<int> a(26,0);
        for(char i:s)
        {
            a[i-97]++;
        }
        int idx=0;
        for(int i=0;i<26;i++)
        {
            while(a[i]--)
            {
                s[idx++]=97+i;
            }
        }
        return s;
    }
