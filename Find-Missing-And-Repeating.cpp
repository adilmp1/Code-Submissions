vector<int> findTwoElement(vector<int> arr, int n)
{
    vector<int> answer;
    int ans[n] = {0};
    int ans1, ans2;
    for (int i = 0; i < n; i++)
    {
        ans[arr[i] - 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            ans1 = i + 1;
        }
        if (ans[i] == 2)
        {
            ans2 = i + 1;
        }
    }

    answer.push_back(ans2);
    answer.push_back(ans1);
    return answer;
}
