void deleteNode(struct Node **head_ref, int key)
{

    struct Node *head = (*head_ref);
    if (head == NULL)
    {
        return;
    }
    if (head->data == key && head->next == head)
    {
        head = NULL;
        return;
    }
    if (head->data == key && head->next != head)
    {
        struct Node *ptr = head;
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = head->next;
        head = head->next;
        return;
    }
    struct Node *ptr = head;
    struct Node *temp = head;
    while (ptr->data != key && ptr->next != head)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    if (ptr->data != key && ptr->next == head)
    {
        return;
    }
    else if (ptr->data == key && ptr->next == head)
    {
        temp->next = head;
    }
    else
    {
        temp->next = ptr->next;
    }
}

void reverse(struct Node **head_ref)
{
    if ((*head_ref) == NULL)
    {
        return;
    }
    struct Node *ptr = (*head_ref);
    while (ptr->next != (*head_ref))
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;
    struct Node *prev;
    struct Node *next;
    struct Node *current;
    prev = NULL;
    next = (*head_ref);
    current = (*head_ref);
    while (next != NULL)
    {
        next = next->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    (*head_ref) = prev;
    ptr = (*head_ref);
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = (*head_ref);
}
