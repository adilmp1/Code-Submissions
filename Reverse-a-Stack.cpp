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
