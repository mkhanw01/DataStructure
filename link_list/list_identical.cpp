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
void push(struct node** head,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=*head;
    ptr->data=item;
    *head=ptr;
}
bool check(struct node* a,struct node* b)
{
    if(a==NULL && b==NULL)
        return 1;
    if(a==NULL && b!=NULL)
        return 0;
    if(b==NULL && a!=NULL)
        return 0;
    if(a->data!=b->data)
        return 0;
}
int main()
{
    struct node* a=NULL;
    struct node* b=NULL;
    push(&a,50);push(&a,30);push(&a,40);push(&a,35);push(&a,30);
    prin(a);
    push(&b,50);push(&b,30);push(&b,40);push(&b,35);push(&b,30);
    prin(b);
    if(check(a,b)==1)
    {
        printf("identical");
    }
    else
    {
        printf("not identical");
    }
    return 0;
}
