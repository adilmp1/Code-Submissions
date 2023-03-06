void deleteAlt(struct Node *head)
{
    Node *ptr = head->next;
    Node *temp = head;
    while (ptr != NULL)
    {
        temp->next = ptr->next;
        temp = ptr;
        ptr = ptr->next;
    }
}
