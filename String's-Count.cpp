long long int countStr(long long int n){
    long long int ans=0;
    long long int temp = (n*(n-1))/2;
    ans = ((2*n)+1)+(3*temp)+(temp*(n-2));
    return ans;
}
