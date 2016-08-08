#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
int getcount(struct node* head)
{
    int count=0;
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
int point(int d,struct node* head1,struct node* head2)
{
    int i;
    struct node* ptr1=head1;
    struct node* ptr2=head2;
    for(i=0;i<d;i++)
    {
        if(ptr1==NULL)
            return -1;
            ptr1=ptr1->next;
    }
    while(ptr1!=NULL && ptr2!=NULL)
    {
      if(ptr1==ptr2)
        return ptr1->data;
      ptr1=ptr1->next;
      ptr2=ptr2->next;
    }
return -1;
}
int intpoint(struct node* head1,struct node* head2)
{
 int c1=getcount(head1);
 int c2=getcount(head2);
 int d;
 if(c1>c2)
 {
     d=c1-c2;
     return point(d,head1,head2);
 }
 else
 {
     d=c2-c1;
     return point(d,head1,head2);
 }
}
int main()
{
  struct node* newNode;
  struct node* head1 =
            (struct node*) malloc(sizeof(struct node));
  head1->data  = 10;

  struct node* head2 =
            (struct node*) malloc(sizeof(struct node));
  head2->data  = 3;

  newNode = (struct node*) malloc (sizeof(struct node));
  newNode->data = 6;
  head2->next = newNode;

  newNode = (struct node*) malloc (sizeof(struct node));
  newNode->data = 9;
  head2->next->next = newNode;

  newNode = (struct node*) malloc (sizeof(struct node));
  newNode->data = 15;
  head1->next = newNode;
  head2->next->next->next  = newNode;

  newNode = (struct node*) malloc (sizeof(struct node));
  newNode->data = 30;
  head1->next->next= newNode;

  head1->next->next->next = NULL;
  printf("inter section piont is =%d",intpoint(head1,head2));
  return 0;
}
