    int minimumNumberOfDeletions(string s1) { 
        int n=s1.size();
        vector<vector<int>>dp (n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s1[i-1]==s1[n-j])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return n-dp[n][n];
    } 

/*


for eg; take adbia
given string = adbia
its reverse  = aibda

the longest common subsequence is aba
its length is 3.
ans = string length - subsequence length = 5-3 = 2

by removing two characters (d,i) the string will become palindrome

*/
