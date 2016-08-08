#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
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
int count(struct node* head,int item)
{
    struct node* ptr=head;
    int cou=0;
    while(ptr!=NULL)
    {
        if(item==ptr->data)
        cou++;
        ptr=ptr->next;
    }
    return cou;
}
void push(struct node** head_ref,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->next=(*head_ref);
    (*head_ref)=ptr;
}
int main()
{
    struct node* head=NULL;
    push(&head,30);
    push(&head,430);
    push(&head,30);push(&head,130);push(&head,30);push(&head,330);push(&head,130);
    print(head);
    printf("no of times=%d",count(head,30));
    return 0;
}
