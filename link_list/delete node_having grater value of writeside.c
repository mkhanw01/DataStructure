#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void del(struct node* head)
{
    struct node* curr=head;
    struct node* temp;
    struct node* max=head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->next->data<max->data)
        {
            temp=curr->next;
            curr->next=temp->next;
            free(temp);
        }
        else
        {
            curr=curr->next;
            max=curr;
        }
    }
}
void revers(struct node** head)
{
    struct node* curr=*head;
    struct node* nxt;
    struct node* prev=NULL;
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    *head=prev;
}
void delet(struct node** head)
{
    revers(head);
    del(*head);
    revers(head);
}
void push(struct node** head,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=*head;
    ptr->data=item;
    *head=ptr;
}
void prin(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
    printf("\n");
}
int main()
{
    struct node* head=NULL;
    push(&head,3);push(&head,4);push(&head,6);push(&head,7);push(&head,11);push(&head,13);push(&head,15);push(&head,19);
    prin(head);
    delet(&head);
    prin(head);
    return 0;
}
