bool check(vector<ll> A, vector<ll> B, int N)
{
    unordered_map<int, int> mp;
    int i;
    for (i = 0; i < N; i++)
    {
        mp[A[i]]++;
    }
    for (i = 0; i < N; i++)
    {
        if (mp.find(B[i]) != mp.end())
        {
            auto itr = mp.find(B[i]);
            if (itr->second > 0)
            {
                itr->second--;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}
