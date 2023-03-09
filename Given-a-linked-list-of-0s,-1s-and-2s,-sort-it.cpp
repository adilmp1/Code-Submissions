Node *segregate(Node *head)
{
    Node *answer = NULL;
    Node *ptr = head;
    Node *temp;
    int i;
    for (i = 0; i <= 2; i++)
    {
        ptr = head;
        while (ptr != NULL)
        {
            if (ptr->data == i)
            {
                if (answer == NULL)
                {
                    answer = new Node(ptr->data);
                    temp = answer;
                }
                else
                {
                    temp->next = new Node(ptr->data);
                    temp = temp->next;
                }
            }
            ptr = ptr->next;
        }
    }
    return answer;
}
