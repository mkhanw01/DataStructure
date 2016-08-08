#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void print(struct node* head)
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
int detect(struct node* head)
{
    struct node* slow=head;
    struct node* fast=head;
    while(slow && fast->next)
    {
        slow=slow->next;
        fast=(fast->next)->next;
        if(slow==fast)
        {
            printf("\n %d %d",slow->data,fast->data);
            printf("\n loop detected..");
            return 1;
        }
    }
      return 0;
}

void push(struct node** head,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->next=(*head);
    (*head)=ptr;
}
int main()
{
    struct node* head=NULL;
    push(&head,28);
    push(&head,25);
    push(&head,120);
    push(&head,40);
    push(&head,70);
    push(&head,10);
    push(&head,60);
    push(&head,2);
    push(&head,20);
    print(head);
    head->next->next->next->next=head;
   detect(head);
    return 0;
}

