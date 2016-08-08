#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int val;
    struct node* next;
};
void push(struct node** head_ref,int data)
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->val=data;
    new_node->next=*head_ref;
    *head_ref=new_node;
}
void revers(struct node* head)
{
    if(head==NULL)
        return;
    printf("%d \t",head->val);
    revers(head->next);
}
int main()
{
    struct node* head=NULL;
    push(&head,220);
    push(&head,320);
    push(&head,50);
    push(&head,30);
    push(&head,10);
    push(&head,201);
    push(&head,210);
    push(&head,120);
    revers(head);
    return 0;
}
