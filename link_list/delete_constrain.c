#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void print(struct node* h)
{
    while(h!=NULL)
    {
        printf("%d\t",h->data);
        h=h->next;
    }
    printf("\n");
}
void add(struct node** head,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=*head;
    ptr->data=item;
    *head=ptr;
}
int main()
{
    struct node* head=NULL;
    add(&head,12);add(&head,15);add(&head,10);add(&head,11);add(&head,5);add(&head,6);add(&head,2);add(&head,3);
    print(head) ;
    delet(head,head->next->next);
    return 0;
}
