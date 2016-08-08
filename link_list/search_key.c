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
void search(struct node* head,int key)
{
    struct node* current=head;
    while(current!=NULL)
    {
        if(current->val==key)
            return true;
        current=current->next;
    }
    return false;
}
int main()
{
    struct node* head=NULL;
    push(&head,10);
    push(&head,0);
    push(&head,-10);
    push(&head,100);
    push(&head,105);
    push(&head,103);
    push(&head,190);
    search(head,103)?printf("true"):printf("false");
    return 0;
}
