vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        long long sum = 0;
        int left = 0;
        int right = 0;
        if(s==0)
        {
            return {-1};
        }
        while(right<n)
        {
            while(sum<s && right<n)
            {
                sum+=arr[right];
                right++;
            }
            if(sum==s)
            {
                return {left+1,right};
            }
            while(sum>s && left<right)
            {
                sum-=arr[left];
                left++;
            }
            if(sum==s)
            {
                return {left+1,right};
            }
        }
        if(sum==s)
        {
            return {left+1,right};
        }
        return {-1};
    }
