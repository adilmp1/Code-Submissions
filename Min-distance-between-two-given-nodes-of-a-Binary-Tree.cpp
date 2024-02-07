    bool isPresent(Node * root,int val)
    {
        if(root==NULL) return false;
        if(root->data==val) return true;
        return (isPresent(root->left,val)||isPresent(root->right,val));
    }
    int distance(Node * root,int val)
    {
        if(root==NULL) return -1;
        if(root->data==val) return 0;
        bool a1 = isPresent(root->left,val);
        bool a2 = isPresent(root->right,val);
        if(a1) return 1+distance(root->left,val); 
        return 1+distance(root->right,val); 
    }
    int helper(Node * root,int a, int b)
    {
        if(root==NULL) return 0;
        if(root->data==a) return distance(root,b);
        if(root->data==b) return distance(root,a);
        if(isPresent(root->left,a) and isPresent(root->left,b)) return helper(root->left,a,b);
        if(isPresent(root->right,a) and isPresent(root->right,b)) return helper(root->right,a,b);
        return (distance(root,a)+distance(root,b));
    }
    int findDist(Node* root, int a, int b) 
    {
        return helper(root,a,b);
    }
