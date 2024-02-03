        long long unsigned int decimalValue(Node *head)
        {
            long long unsigned int mod = 1e9+7;
            Node * ptr = head;
            long long unsigned int ans=0;
            while(ptr)
            {
                ans=(ans*2+ptr->data)%mod;
                ptr=ptr->next;
            }
            return ans;
        }
