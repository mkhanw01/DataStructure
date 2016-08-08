#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void sortins(struct node** head,struct node* ptr)
{
  struct node* current;
  if((*head)->next==NULL || (*head)->data>=ptr->data)
  {
      ptr->next=(*head);
      (*head)=ptr;
  }
  else
  {
      current=*head;
     while((current->next!=NULL)&&(current->next->data<ptr->data))
     {
         current=current->next;
     }
     ptr->next=current->next;
     current->next=ptr;
   }
}
struct node *newNode(int item)
{
  struct node* ptr=(struct node*)malloc(sizeof(struct node));
  ptr->data=item;
  ptr->next=NULL;
  return ptr;
};
void pri(struct node* head)
{
    struct node* pt=head;
    while(pt!=NULL)
    {
        printf("%d",pt->data);
        pt=pt->next;
    }
}
int maim()
{
    struct node* head=NULL;
    struct node *newnode=newNode(75);
    sortins(&head,newnode);
    newnode=newNode(5);
    sortins(&head,newnode);
    newnode=newNode(50);
    sortins(&head,newnode);
    //pri(head);
    newnode=newNode(45);
    sortins(&head,newnode);
    newnode=newNode(-5);
    sortins(&head,newnode);
    pri(head);
    return 0;
}
