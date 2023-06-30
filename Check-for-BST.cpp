bool checkBST(Node * root, int min, int max)
    {
        if(!root)
            return true;
        
        if(root->data >min && root->data < max)
        {
            return checkBST(root->left,min,root->data) && checkBST(root->right,root->data,max);
        }
        return false;
    }
    
    bool isBST(Node* root) 
    {
        if(!root)
            return true;
        
        if(checkBST(root->left,0,root->data) && checkBST(root->right,root->data,99999))
            return true;
        
        return false;
    }
