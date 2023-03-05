void preOrderTraversal(Node * root,vector<int> &s)
{
    if(root!=NULL)
    {
        s.push_back(root->data);
        preOrderTraversal(root->left,s);
        preOrderTraversal(root->right,s);
    }
}
vector<int> preorder(Node* root) {
    // Your code here
    vector<int> s;
    preOrderTraversal(root,s);
    return s;
}
