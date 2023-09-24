vector<int> mergeKArrays(vector<vector<int>> a, int K)
{
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            ans.push_back(a[i][j]);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

//Optimized

class data{
    public:
    int val,apos,vpos;
    data(int v,int ap,int vp)
    {
        val=v;
        apos=ap;
        vpos=vp;
    }
};
struct mycomp
{
    bool operator()(data& d1,data& d2)
    {
        return d1.val > d2.val;
    }
};
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> a, int k)
    { 
        vector<int> ans;
        priority_queue<data,vector<data>,mycomp> pq;
        for(int i=0;i<k;i++)
        {
            data d(a[i][0],i,0);
            pq.push(d);
        }
        while(!pq.empty())
        {
            data temp = pq.top();
            ans.push_back(temp.val);
            pq.pop();
            if(temp.vpos!=k-1)
            {
                temp.vpos++;
                temp.val = a[temp.apos][temp.vpos];
                pq.push(temp);
            }
        }
        return ans;
    }
};
