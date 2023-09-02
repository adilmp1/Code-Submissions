int longestSubsequence(int n, int a[])
{
    int temp[n + 1];
    for (int i = 1; i <= n; i++)
    {
        temp[i] = INT_MAX;
    }
    temp[0] = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int idx = upper_bound(temp, temp + n + 1, a[i]) - temp;
        if (temp[idx - 1] < a[i] and temp[idx] > a[i])
        {
            temp[idx] = a[i];
        }
    }
    for (int i = n; i >= 0; i--)
    {
        if (temp[i] != INT_MAX)
        {
            return i;
        }
    }
    return 0;
}

    // Example This is how insertion work
    // Eg: 0 8 4 12 2 10 6 14 1 9 5 13 3 11 7 15
    // 0

    // 0   8

    // 0   8
    //     4

    // 0   8   12
    //     4

    // 0   8   12
    //     4
    //     2

    // 0   8   12
    //     4   10
    //     2

    // 0   8   12  
    //     4   10
    //     2   6

    // 0   8   12  14
    //     4   10
    //     2   6

    // 0   8   12  14
    //     4   10  
    //     2   6
    //     1

    // 0   8   12  14
    //     4   10  9
    //     2   6
    //     1   

    // 0   8   12  14
    //     4   10  9
    //     2   6
    //     1   5

    // 0   8   12  14  13
    //     4   10  9
    //     2   6
    //     1   5

    // 0   8   12  14  13
    //     4   10  9
    //     2   6
    //     1   5
    //         3

    // 0   8   12  14  13
    //     4   10  9   11
    //     2   6
    //     1   5
    //         3

    // 0   8   12  14  13
    //     4   10  9   11
    //     2   6   7
    //     1   5
    //         3

    //  0  8   12  14  13  15
    //     4   10  9   11
    //     2   6   7
    //     1   5   
    //         3
