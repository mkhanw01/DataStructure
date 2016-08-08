#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void print(struct node* head)
{
    int count=0;
    if(head==NULL)
        return;
        if(count%2==0)
        {
            count++;
            printf("%d\t",head->data);
            print(head->next);
        }
    printf("\n");
        if(count%2==1)
        {
            count++;
            print(head->next);
            printf("%d\t",head->data);
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
     push(&head,9);push(&head,8);
     push(&head,7);push(&head,6);push(&head,5);push(&head,4);push(&head,3);push(&head,2);push(&head,1);
    print(head);
    return 0;

}
