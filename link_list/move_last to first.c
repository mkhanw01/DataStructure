#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void move(struct node** head)
{
    if((*head)==NULL ||(*head)->next==NULL)
        return;
    struct node* ptr=*head;
    struct node* last=NULL;
    while(ptr->next!=NULL)
    {
        last=ptr;
        ptr=ptr->next;

    }
   // printf("\n%d\t\n",ptr->next->data);
    ptr->next=*head;
    printf("\n%d\t\n",ptr->next->data);
    *head=ptr;
    printf("\n%d\t\n",(*head)->data);
    last->next=NULL;
}
void print(struct node* head)
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
    push(&head,230);
    push(&head,36);
    push(&head,10);
    push(&head,3);
    push(&head,56);
    push(&head,34);
    push(&head,76);
    push(&head,30);
    print(head);
    move(&head);
    print(head);
    return 0;
}
