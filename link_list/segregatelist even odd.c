#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void prin(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
    printf("\n");
}
void merg(struct node* a,struct node* b)
{
    struct node* ptr=a;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=b;
    prin(a);
}
void push(struct node** head,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=*head;
    ptr->data=item;
    *head=ptr;
}
void seg(struct node* head)
{
    struct node* ptr=head;
    struct node* a=NULL;
    struct node* b=NULL;
    while(ptr!=NULL)
    {
        if(ptr->data%2==0)
        {
            push(&a,ptr->data);
            ptr=ptr->next;
        }
        else
        {
            push(&b,ptr->data);
            ptr=ptr->next;
        }
    }
    merg(a,b);
}

int main()
{
    struct node* head=NULL;
    push(&head,6);push(&head,7);push(&head,1);push(&head,4);push(&head,5);push(&head,10);push(&head,12);
    push(&head,8);push(&head,15);push(&head,17);
    prin(head);
    seg(head);
    return 0;
}
