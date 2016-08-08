#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void print(struct node* h)
{
    struct node* ptr=h;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
struct node *intersect(struct node* a,struct node* b)
{
  if(a==NULL || b==NULL)
    return;
  if(a->data<b->data)
      return intersect(a->next,b);
  if(a->data>b->data)
      return intersect(a,b->next);
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a->data;
    temp->next=intersect(a->next,b->next);
    return temp;
}
void push(struct node** h,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=*h;
    ptr->data=item;
    *h=ptr;
}
int main()
{
    struct node* a=NULL;
    struct node* b=NULL;
    struct node *c=NULL;
    push(&a,11);push(&a,7);push(&a,5);push(&a,2);push(&a,1);
    print(a);
    push(&b,15);push(&b,13);push(&b,11);push(&b,7);push(&b,4);push(&b,2);
    print(b);
    c=intersect(a,b);
    print(c);
    return 0;
}
