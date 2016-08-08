#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void  print(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
    printf("\n");
}
void push(struct node** head,int item)
{
    struct  node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=*head;
    ptr->data=item;
    *head=ptr;
}
void removeloop(struct node* slow,struct node* head)
{
    struct node* ptr1=slow;
    struct node* ptr2=slow;
    unsigned int k=1,i;
   while(ptr1->next!=ptr2)
   {
       ptr1=ptr1->next;
       k++;
   }
   ptr1=head;
   ptr2=head;
   for(i=0;i<k;i++)
    ptr2=ptr2->next;
   while(ptr2!=ptr1)
   {
       ptr1=ptr1->next;
       ptr2=ptr2->next;
   }
   ptr2=ptr2->next;
   while(ptr2->next!=ptr1)
    ptr2=ptr2->next;
    ptr2->next=NULL;

}
int detecloop(struct node* list)
{
  struct node *slow=list,*fast=list;
  while(slow && fast && fast->next)
  {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    {
        removeloop(slow,list);
        return 1;
    }

  }
  return 0;
}
int main()
{
    struct node* head=NULL;
    push(&head, 10);
    push(&head, 4);
    push(&head, 15);
    push(&head, 20);
    push(&head, 50);
    head->next->next->next->next->next = head->next->next;
    detecloop(head);
    print(head);
    return 0;
}
