        int sum=0;
        void helper(Node *root)
        {
            if(!root) return;
            helper(root->left);
            if(!root->left and !root->right) sum+=root->data;
            helper(root->right);
        }
        int sumOfLeafNodes(Node *root ){
            helper(root);
            return sum;
        }
