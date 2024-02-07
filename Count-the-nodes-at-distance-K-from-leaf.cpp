// My Code
    bool isHeightK(Node * root,int k)
    {
        if(root==NULL) return false;
        if(root->left==NULL and root->right==NULL and k==0) return true;
        return (isHeightK(root->left,k-1)||isHeightK(root->right,k-1));
    }
    int count(Node * root, int k)
    {
        if(root==NULL) return 0;
        if(isHeightK(root,k))
        {
            return (1+count(root->left,k)+count(root->right,k));
        }
        return (count(root->left,k)+count(root->right,k));
    }
    int printKDistantfromLeaf(Node* root, int k){
        return count(root, k);
    }


// Copied Code
    bool heightK(Node* node, int k){
        if(!node){
            return false;
        }
        if(!node->left && !node->right){
            if(k==0) return true;
            return false;
        }
        if(heightK(node->left, k-1) || heightK(node->right, k-1)) return true;
        return false;
    }
    int count(Node* root, int k){
        if(!root) return 0; 
        if(heightK(root, k)) {
            return 1+count(root->left, k)+count(root->right, k);
        }
        return count(root->left, k)+count(root->right, k);
    }
    int printKDistantfromLeaf(Node* root, int k){
        return count(root, k);
    }
