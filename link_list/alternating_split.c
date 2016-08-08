#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void print(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
}
void push(struct node** head,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=item;
    *head=ptr;
}
int main()
{
    struct node* head=NULL;
    puch(&head,6);puch(&head,5);puch(&head,4);puch(&head,3);puch(&head,2);puch(&head,1);
    print(head);
}
