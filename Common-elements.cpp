vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
{
    vector<int> ans;
    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;
    unordered_map<int,int> mp3;
    for(int i=0;i<n1;i++) 
    {
        if(mp1.find(a[i])==mp1.end())
        {
            mp1[a[i]]++;
        }
    }
    for(int i=0;i<n2;i++) 
    {
        if(mp2.find(b[i])==mp2.end())
        {
            mp2[b[i]]++;
        }
    }
    for(int i=0;i<n3;i++) 
    {
        if(mp3.find(c[i])==mp3.end())
        {
            mp3[c[i]]++;
        }
    }
    for(auto& pair:mp1)
    {
        if(mp2.find(pair.first)!=mp2.end() and mp3.find(pair.first)!=mp3.end())
        {
            ans.push_back(pair.first);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
