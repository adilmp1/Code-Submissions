string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> s;
    int i,count=0;
    for(i=0;i<m;i++)
    {
        s[a2[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(s.find(a1[i])!=s.end())
        {
            count++;
        }
    }
    
    if(count>=m)
    {
        return "Yes";
    }
    return "No";
}
