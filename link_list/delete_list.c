#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void delet(struct node** head)
{
    struct node* ptr=*head;
    struct node* pre;
    while(ptr!=NULL)
    {
        pre=ptr->next;
        free(ptr);
        ptr=pre;
    }
    *head=NULL;
}
print(struct node* head)
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void pus(struct node** head_ref,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->next=(*head_ref);
    (*head_ref)=ptr;
}
int main()
{
    struct node* head=NULL;
    pus(&head,50);
    pus(&head,360);
    pus(&head,60);
    pus(&head,460);
    pus(&head,604);
    pus(&head,603);
    pus(&head,620);
    pus(&head,160);
    print(head);
    delet(&head);
    print(head);
    return 0;
}
