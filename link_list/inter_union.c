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
struct node *getuni(struct node* l1,struct node* l2)
{

}
int main()
{
    struct node* l1=NULL;
    struct node* l2=NULL;
    struct node* uni=NULL;
    struct node* in=NULL;
    add(&l1,20);add(&l1,4);add(&l1,15);add(&l1,10);
    print(l1);
    uni=getuni(l1,l2);
    add(&l2,10);add(&l2,4);add(&l2,4);add(&l2,8);
    print(l2);

    return 0;
}
