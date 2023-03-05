void display(Node *head)
{
  //your code goes here
  Node * ptr = head;
  while(ptr!=NULL)
  {
      printf("%d ", ptr->data);
      ptr=ptr->next;
  }
}
