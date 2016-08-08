#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void reverse(struct node* head)
{
   if(head==NULL)
    return;
   reverse(head->next);
    printf("%d\t",head->data);
}
void print(struct node* head)
{
    struct node* ptr=head;
    printf("\n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void push(struct node** head_ref,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=(*head_ref);
    ptr->data=item;
    (*head_ref)=ptr;
}
int main()
{
    struct node* head=NULL;
    push(&head,60);
    push(&head,30);
    push(&head,0);
    push(&head,750);
    push(&head,530);
    push(&head,-50);
    push(&head,509);
    print(head);
    reverse(head);
    print(head);
    return 0;
}
