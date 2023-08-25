void rearrange(int a[], int n) 
{
    vector<int> positives;
    vector<int> negatives;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            positives.push_back(a[i]);
        }
        else
        {
            negatives.push_back(a[i]);
        }
    }
    bool flag=true;
    int indP=0;
    int indN=0;
    int countP = positives.size();
    int countN = negatives.size();
    for(int i=0;i<n;)
    {
        if(flag && indP<countP)
        {
            a[i]=positives[indP];
            flag=!flag;
            indP++;
            i++;
        }
        else if(!flag && indN<countN)
        {
            a[i]=negatives[indN];
            flag=!flag;
            indN++;
            i++;
        }
        if(indN>=countN)
        {
            flag=true;
        }
        if(indP>=countP)
        {
            flag=false;
        }
        
    }
}
