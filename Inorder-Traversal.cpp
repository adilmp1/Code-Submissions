void inOrderTraversal(Node * root,vector<int> &s)
{
    if(root!=NULL)
    {
        inOrderTraversal(root->left,s);
        s.push_back(root->data);
        inOrderTraversal(root->right,s);
    }
}
vector<int> inOrder(Node* root) {
    // Your code here
    vector<int> s;
    inOrderTraversal(root,s);
    return s;
}
