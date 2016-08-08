#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *newnode(int item)
{
 struct node *ptr=(struct node*)malloc(sizeof(struct node));
 ptr->data=item;
 ptr->next=NULL;
 return ptr;
}
struct node* addnum(struct node* f,struct node* s)
{
  struct node* res=NULL;
  struct node *temp,*pre=NULL;
  int carry=0,sum;
  while(f!=NULL || s!=NULL)
  {
      sum=carry+(f?f->data:0)+(s?s->data:0);
      carry=(sum>=10)?1:0;
      sum%=10;
      temp=newnode(sum);
      if(res==NULL)
        res=temp;
      else
        pre->next=temp;
      pre=temp;
      if(f)f->next;
      if(s)s->next;
  }
  if(carry>0)
      temp->next=newnode(carry);
  return res;
}
void print(struct node* f)
{
   while(f!=NULL)
   {
        printf("%d\t",f->data);
        f=f->next;
   }
printf("\n");
}

void add(struct node** l,int item)
{
    struct node* ptr=newnode(item);
    ptr->next=*l;
    ptr->data=item;
    *l=ptr;
}
int main()
{
    struct node* res=NULL;
    struct node* f=NULL;
    struct node* s=NULL;
    add(&f,6);add(&f,4);add(&f,9);add(&f,5);add(&f,7);
    print(f);
    add(&s,8);add(&s,4);
    print(s);
    res=addnum(f,s);
    print(res);
    return 0;
}
