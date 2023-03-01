bool isCircular(Node *head)
{
   if(head==NULL)
   {
       return true;
   }
   Node * ptr = head;
   while(ptr->next!=head && ptr->next!=NULL)
   {
       ptr=ptr->next;
   }
   if(ptr->next==NULL)
   {
       return false;
   }
    return true;
}
