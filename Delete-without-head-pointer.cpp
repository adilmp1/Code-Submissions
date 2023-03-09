void deleteNode(Node *del)
{
    del->data = del->next->data;
    Node *temp = del->next;
    del->next = del->next->next;
    delete temp;
}
