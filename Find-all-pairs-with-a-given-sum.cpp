vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
    vector<pair<int, int>> v;
    unordered_map<int, int> mp;
    int i;
    for (i = 0; i < M; i++)
    {
        mp[B[i]]++;
    }
    for (i = 0; i < N; i++)
    {
        if (mp.find(X - A[i]) != mp.end())
        {
            v.push_back({A[i], X - A[i]});
        }
    }
    sort(v.begin(), v.end());
    return v;
}
