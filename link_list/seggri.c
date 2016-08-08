#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void  print(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
    printf("\n");
}
void seg(struct node** head)
{
    struct node*  last;
    struct node* last_end;
    struct node* cur=*head;
    struct node* pre=NULL;
    while(cur->next!=NULL)
        cur=cur->next;
    last=cur;
    last_end=cur;
    cur=*head;
    while(cur!=last && cur->data%2!=0)
    {
        last_end->next=cur;
         cur=cur->next;
        last_end->next->next=NULL;
        last_end=last_end->next;
    }
    if(cur->data%2==0)
    {
        *head=cur;
        while(cur!=last)
        {
            if(cur->data%2==0)
            {
                pre=cur;
                cur=cur->next;
            }
            else
            {
            pre->next=cur->next;
            cur->next=NULL;
            last_end->next=cur;
            last_end=cur;
            cur=pre->next;
            }
        }

    }
    else pre=cur;
    if(last!=last_end && last->data%2!=0)
    {
        pre->next=last->next;
        last->next=NULL;
        last_end->next=last;
    }
    return;
}
void add(struct node** head,int item)
{
    struct  node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=*head;
    ptr->data=item;
    *head=ptr;
}
int main()
{
    struct node* head=NULL;
    add(&head,15);add(&head,12);add(&head,17);add(&head,18);add(&head,20);add(&head,42);add(&head,25);
    print(head);
    seg(&head);
     print(head);
    return 0;
}
