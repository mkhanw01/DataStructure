#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
struct node *altreverse(struct node* head,int k)
{
 struct node* curr=head;
 struct node* nxt;
 struct node* prev=NULL;
 int count=0;
 while(curr!=NULL && count<k)
 {
     nxt=curr->next;
     curr->next=prev;
     prev=curr;
     curr=nxt;
     count++;
 }
 if(head!=NULL)
    head->next=curr;
 count=0;
 while(count<k-1 && curr!=NULL)
 {
     curr=curr->next;
     count++;
 }
 if(curr!=NULL)
 curr->next=altreverse(curr->next,k);
 return prev;
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
    struct node* alt;
    push(&a,9);push(&a,8);push(&a,7);push(&a,6);push(&a,5);push(&a,4);push(&a,3);push(&a,2);push(&a,1);
    prin(a);
    alt=altreverse(a,3);
    prin(alt);
    return 0;
}
