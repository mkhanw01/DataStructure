#include<stdio.h>
#include<malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node* NODE;
NODE head=NULL;
void add_specific(NODE* head_ref,int item,int key)
{
    NODE ptr1,ptr=*head_ref;
    NODE p=(NODE)malloc(sizeof(struct node));
    p->data=item;
    if(*head_ref==NULL)
    {
        p->next=*head_ref;
     return;
    }
    while((ptr->data!=key)&&(ptr!=NULL))
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    if((ptr->data==key)&&(ptr==NULL))
    {
         p->next=ptr;
        ptr1->next=p;
        return;
    }
    else if(ptr==NULL)
    {
        printf("key was not exixt in the list..");
        return;
    }
    else
    {
        p->next=ptr;
        ptr1->next=p;
    }
return;
}
void add_end(NODE* head_ref,int item)
{
    NODE ptr=*head_ref;
    NODE p=(NODE)malloc(sizeof(struct node));
    p->data=item;
    p->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=p;
        return;
    }
    while(ptr->next !=NULL)
        ptr=ptr->next;
    ptr->next=p;
    return;
}
void printlist(NODE ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    return;
}
int main()
{
    printf("operation of addind node in link list..\n");
    add_end(&head,30);
    add_specific(&head,80,30);
    add_end(&head,50);
    add_end(&head,38);
    add_end(&head,15);
    printlist(head);
    add_end(&head,0);
    add_end(&head,20);
    //printf("after inserting a new node ..\n");
    //add_specific(&head,80,30);
    printlist(head);
    return 0;
}

