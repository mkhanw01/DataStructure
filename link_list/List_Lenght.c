#include<stdio.h>
#include<stdlib.h>
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
/*int getcont(struct node* head)
{
    int count=0;
    struct node* current=head;
    while(current!=NULL)
    {
         count++;
        current=current->next;

    }
    return count;
}*/
int getcount(struct node* head)
{
    if(head==NULL)
        return 0;
    else
        return (1+getcount(head->next));
}
int main()
{
 struct node* head=NULL;
 push(&head,19);
 push(&head,30);
 push(&head,21);
 push(&head,20);
 push(&head,10);
 push(&head,15);
 printf("no of nodes..%d",getcount(head));
 return 0;
}
