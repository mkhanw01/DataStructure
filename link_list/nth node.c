#include<stdio.h>
#include<malloc.h>
//#include<assert.h>
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
void print(struct node* head)
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
        printf("\n");
    }
}
int get(struct  node* head,int pos)
{
    int count=0;
    struct node*ptr=head;
    while(ptr->next!=NULL)
    {
        count++;
        if(pos==count)
            return (ptr->data);

        ptr=ptr->next;
    }
  //  assert(0);
}
int main()
{
    int pos;
    struct node* head=NULL;
    add(&head,10);
    add(&head,19);
    add(&head,16);
    add(&head,12);
    add(&head,15);
    add(&head,13);
    print(head);
    pos=get(head,4);
    printf("the item in position 4 is=%d",pos);
    return 0;
}
