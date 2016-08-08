#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void add(struct node** head_ref,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->next=(*head_ref);
    (*head_ref)=ptr;
}
int print(struct node* head,int mid)
{
    int count=0;
    struct node* ptr=head;
    while(count!=mid)
    {
        count++;
        ptr=ptr->next;
    }
    return (ptr->data);
}
int middle(struct node* head)
{
    int mid=0;
    struct node* ptr1=head;
    while(ptr1!=NULL)
    {
        mid++;
        ptr1=ptr1->next;
    }
    mid=(int)mid/2;
    return print(head,mid);
}
int main()
{
    struct node* head=NULL;
    add(&head,20);
    add(&head,40);
    add(&head,60);
    add(&head,80);
    add(&head,90);
    add(&head,190);
    add(&head,90);
    printf("middle node is=%d",middle(head));
          return 0;

}
