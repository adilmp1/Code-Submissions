    pair<int,int> helper(Node * root)
    {
        if(root==NULL) return {0,0};
        
        auto leftHeight = helper(root->left);
        auto rightHeight = helper(root->right);
        int height = 1+max(leftHeight.first,rightHeight.first);
        int dia = max({1+leftHeight.first+rightHeight.first,leftHeight.second,rightHeight.second});
        return {height,dia};
    }
    int diameter(Node* root) 
    {
        auto result = helper(root);
        return result.second;
    }
