#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void swap(int *t1,int *t2)
{
    int temp;
    temp=*t1;
    *t1=*t2;
    *t2=temp;
}
void swaplist(struct node* head)
{
    struct node* ptr=head;
    while(ptr!=NULL && ptr->next!=NULL)
    {
        swap(&ptr->data,&ptr->next->data);
    ptr=ptr->next->next;
    }
}
void printlist(struct node* head)
{
        struct node* ptr=head;
        while(ptr!=NULL)
        {
         printf("%d\t",ptr->data);
         ptr=ptr->data;
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
    push(&head,70);
    push(&head,70);
    push(&head,43);
    push(&head,21);
    push(&head,21);
    push(&head,7);
    push(&head,7);
    push(&head,7);
    printlist(head);
    swaplist(head);
    printlist(head);
    return 0;
}
