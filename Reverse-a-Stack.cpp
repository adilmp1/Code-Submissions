// code 1 with O(1) space complexity
void insertAtBottom(stack<int>&s,int val)
{
    if(s.empty())
    {
        s.push(val);
    }
    else
    {
        int x = s.top();
        s.pop();
        insertAtBottom(s,val);
        s.push(x);
    }
}
void Reverse(stack<int> &s)
{
    int val = s.top();
    s.pop();
    if (!s.empty())
    {
        Reverse(s);
    }
    insertAtBottom(s,val);
}


// code 2 with O(n) space complexity
vector<int> temp;
void Reverse(stack<int> &s)
{
    // int val = s.top();
    temp.push_back(s.top());
    s.pop();
    if (!s.empty())
    {
        Reverse(s);
    }
    s.push(temp[0]);
    temp.erase(temp.begin());
}
