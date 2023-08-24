bool isPresent(vector<vector<char>> grid, int i, int j, int rows, int cols, string s)
{
    if (grid[i][j] != s[0])
    {
        return false;
    }
    int currentRow, currentCol;
    // checks horizontally left
    int ind = 0;
    currentRow = i;
    string str = "";
    currentCol = j;
    while (currentCol >= 0 && ind < s.size() && grid[i][currentCol] == s[ind])
    {
        str.push_back(grid[i][currentCol]);
        currentCol--;
        ind++;
    }
    if (str == s)
    {
        return true;
    }
    // checks horizontally right
    ind = 0;
    currentRow = i;
    currentCol = j;
    str = "";
    while (currentCol < cols && ind < s.size() && grid[i][currentCol] == s[ind])
    {
        str.push_back(grid[i][currentCol]);
        currentCol++;
        ind++;
    }
    if (str == s)
    {
        return true;
    }
    // checks vertically down
    ind = 0;
    str = "";
    currentRow = i;
    currentCol = j;
    while (currentRow < rows && ind < s.size() && grid[currentRow][j] == s[ind])
    {
        str.push_back(grid[currentRow][j]);
        currentRow++;
        ind++;
    }
    if (str == s)
    {
        return true;
    }
    // checks vertically up
    ind = 0;
    str = "";
    currentRow = i;
    currentCol = j;
    while (currentRow >= 0 && ind < s.size() && grid[currentRow][j] == s[ind])
    {
        str.push_back(grid[currentRow][j]);
        currentRow--;
        ind++;
    }
    if (str == s)
    {
        return true;
    }
    // checks diagonally up-left
    ind = 0;
    str = "";
    currentRow = i;
    currentCol = j;
    while (currentRow >= 0 && currentCol >= 0 && ind < s.size() && grid[currentRow][currentCol] == s[ind])
    {
        str.push_back(grid[currentRow][currentCol]);
        currentRow--;
        currentCol--;
        ind++;
    }
    if (str == s)
    {
        return true;
    }
    // checks diagonally up-right
    ind = 0;
    str = "";
    currentRow = i;
    currentCol = j;
    while (currentRow >= 0 && currentCol < cols && ind < s.size() && grid[currentRow][currentCol] == s[ind])
    {
        str.push_back(grid[currentRow][currentCol]);
        currentRow--;
        currentCol++;
        ind++;
    }
    if (str == s)
    {
        return true;
    }
    // checks diagonally down-left
    ind = 0;
    str = "";
    currentRow = i;
    currentCol = j;
    while (currentRow < rows && currentCol >= 0 && ind < s.size() && grid[currentRow][currentCol] == s[ind])
    {
        str.push_back(grid[currentRow][currentCol]);
        currentRow++;
        currentCol--;
        ind++;
    }
    if (str == s)
    {
        return true;
    }
    // checks diagonally down-right
    ind = 0;
    str = "";
    currentRow = i;
    currentCol = j;
    while (currentRow < rows && currentCol < cols && ind < s.size() && grid[currentRow][currentCol] == s[ind])
    {
        str.push_back(grid[currentRow][currentCol]);
        currentRow++;
        currentCol++;
        ind++;
    }
    if (str == s)
    {
        return true;
    }
    return false;
}
vector<vector<int>> searchWord(vector<vector<char>> grid, string word)
{
    int n = grid.size();
    vector<vector<int>> ans;
    int m = grid[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (isPresent(grid, i, j, n, m, word))
            {
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(j);
                ans.push_back(temp);
            }
        }
    }
    return ans;
}
