vector<int> factorial(int n)
{
    vector<int> ans;
    ans.push_back(1);
    for (int val = 2; val <= n; val++)
    {
        int carry = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            int temp = ans[i] * val + carry;
            ans[i] = temp % 10;
            carry = temp / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
