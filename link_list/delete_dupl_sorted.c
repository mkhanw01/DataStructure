#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void duplicate(struct node* head)
{
    struct node* ptr=head;
    struct node* hold;
    if(ptr==NULL)
        return;
    while(ptr->next!=NULL)
    {
       if(ptr->data==ptr->next->data)
       {
           hold=ptr->next->next;
           free(ptr->next);
           ptr->next=hold;
       }
       else
        ptr=ptr->next;
    }
}
void printlist(struct node* head)
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void push(struct node** head,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=*head;
    ptr->data=item;
    *head=ptr;
}
int main()
{
    struct node* head=NULL;
    push(&head,70);
    push(&head,70);
    push(&head,43);
    push(&head,21);
    push(&head,21);
    push(&head,7);
    push(&head,7);
    push(&head,7);
    printlist(head);
    duplicate(head);
    printlist(head);
    return 0;
}
