#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* sortmerge(struct node* a,struct node* b)
{
    struct node* result=NULL;
 if(a==NULL)
    return b;
 if(b==NULL)
    return a;
    if(a->data<=b->data)
    {
        result=a;
        result->next=sortmerge(a->next,b);
    }
    else
    {
        result=b;
        result->next=sortmerge(a,b->next);
    }
    return result;
}
void split(struct node* sour,struct node** fr,struct node** ba)
{
    struct node* slow;
    struct node* fast;
    if(sour==NULL || sour->next==NULL)
    {
        *fr=sour;
        *ba=NULL;
    }
    else
    {
        slow=sour;
        fast=sour->next;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                slow=slow->next;
                fast=fast->next;
            }
        }
        *fr=sour;
        *ba=slow->next;
        slow->next=NULL;
    }
}
struct node* merge(struct node** head)
{
    struct node* ptr=*head;
    struct node* a;
    struct node* b;
    if(ptr==NULL || (ptr->next==NULL))
       return;
       split(ptr,&a,&b);
       merge(&a);
       merge(&b);
       *head=sortmerge(a,b);
}
void print(struct node* ptr)
{
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
    push(&head,20);push(&head,130);push(&head,5);push(&head,40);push(&head,-30);
    push(&head,0);push(&head,53);
    merge(&head);
    print(head);
    return 0;
}
