vector<vector<int>> uniqueRow(int M[MAX][MAX], int row, int col)
{
    unordered_set<string> st;
    vector<vector<int>> ans;
    for(int i=0;i<row;i++)
    {
        string s;
        for(int j=0;j<col;j++)
        {
            s+=to_string(M[i][j]);
        }
        if(st.find(s)==st.end())
        {
            vector<int> x;
            for(int j=0;j<s.size();j++)
            {
                x.push_back(s[j]-'0');
            }
            ans.push_back(x);
        }
        st.insert(s);
    }
    return ans;
}
