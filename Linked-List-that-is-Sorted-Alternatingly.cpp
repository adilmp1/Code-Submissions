void sort(Node **head)
{
    // Code here
    if ((*head) == NULL || (*head)->next == NULL)
    {
        return;
    }
    Node *answer3 = NULL;
    Node *answer = NULL;
    Node *answer2 = NULL;
    Node *ptr = (*head);
    Node *temp;
    Node *temp2;
    int data2;
    int flag = 0;
    int data1 = (*head)->data;
    while (ptr != NULL)
    {
        Node *newNode = new Node(ptr->data);
        if (flag % 2 == 0)
        {
            if (answer == NULL)
            {
                answer = newNode;
                temp = answer;
            }
            else
            {
                temp->next = newNode;
                temp = temp->next;
            }
            if (ptr->next == NULL)
            {
                break;
            }
        }
        else
        {
            Node *newNode = new Node(ptr->data);
            if (answer2 == NULL)
            {
                answer2 = newNode;
            }
            else
            {
                newNode->next = answer2;
                answer2 = newNode;
                data2 = answer2->data;
            }
        }
        flag++;
        ptr = ptr->next;
    }
    while (answer != NULL && answer2 != NULL)
    {
        if (answer->data <= answer2->data)
        {
            Node *newNode = new Node(answer->data);
            if (answer3 == NULL)
            {
                answer3 = newNode;
                temp = answer3;
            }
            else
            {
                temp->next = newNode;
                temp = temp->next;
            }
            answer = answer->next;
        }
        else
        {
            Node *newNode = new Node(answer2->data);
            if (answer3 == NULL)
            {
                answer3 = newNode;
                temp = answer3;
            }
            else
            {
                temp->next = newNode;
                temp = temp->next;
            }
            answer2 = answer2->next;
        }
    }
    while (answer != NULL)
    {
        Node *newNode = new Node(answer->data);
        temp->next = newNode;
        temp = temp->next;
        answer = answer->next;
    }
    while (answer2 != NULL)
    {
        Node *newNode = new Node(answer2->data);
        temp->next = newNode;
        temp = temp->next;
        answer2 = answer2->next;
    }
    *head = answer3;
}
