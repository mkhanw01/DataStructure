#include<malloc.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node* NODE;
NODE head=NULL;
void pus(NODE* head_ref,int item)
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
    while(ptr!=NULL)
        ptr=ptr->next;
    ptr->next=p;
    return;
}
void printlist(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    pus(&head,20);
    pus(&head,01);
    pus(&head,54);
    pus(&head,-25);
    pus(&head,100);
    printlist(head);
}
