#include<stdio.h>
#include<malloc.h>
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
struct node* merg(struct node* a,struct node* b)
{
    struct node* result=NULL;
    if(a==NULL)
        return b;
    else if(b==NULL)
        return a;
    if(a->data<=b->data)
    {
        result=a;
        result->next=merg(a->next,b);
    }
    else
    {
        result=b;
        result->next=merg(b->next,a);
    }
return (result);
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
    struct node* a=NULL;
    struct node* b=NULL;
    struct node* c=NULL;
    push(&a,50);push(&a,45);push(&a,40);push(&a,35);push(&a,30);push(&a,25);push(&a,20);push(&a,15);
    prin(a);
    push(&b,49);push(&b,46);push(&b,38);push(&b,25);push(&b,23);push(&b,13);
    prin(b);
    c=merg(a,b);
    prin(c);
    return 0;
}
