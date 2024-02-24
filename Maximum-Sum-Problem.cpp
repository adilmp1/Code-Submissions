        int maxSum(int n)
        {
            if(n==0) return 0;
            int sum = (n/2)+(n/3)+(n/4);
            sum=max(n,max(maxSum(n/2),(n/2))+max(maxSum(n/3),(n/3))+max(maxSum(n/4),(n/4)));
            return sum;
        }
