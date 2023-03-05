void postOrderTraversal(Node * root,vector<int> &s)
{
    if(root!=NULL)
    {
        postOrderTraversal(root->left,s);
        postOrderTraversal(root->right,s);
        s.push_back(root->data);
    }
}
vector<int> postOrder(Node* root) {
    // Your code here
    vector<int> s;
    postOrderTraversal(root,s);
    return s;
}
