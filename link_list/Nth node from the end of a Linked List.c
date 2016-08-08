#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void fromlast(struct node* head,int n)
{
    struct node* ptr=head;
    int len=0,i;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
     len++;
    }
        if(len<n)
            return;
        len=(len-n+1);
        ptr=head;
        for(i=1;i<len;i++)
              ptr=ptr->next;
              printf("%d",ptr->data);
}
void push(struct node** head_ref,int item)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->next=*head_ref;
    *head_ref=ptr;
}
int main()
{
    struct node* head=NULL;
    push(&head,20);
    push(&head,50);
    push(&head,30);
    push(&head,29);
    push(&head,21);
    push(&head,25);
    push(&head,22);
    fromlast(head,3);
    return 0;
}
