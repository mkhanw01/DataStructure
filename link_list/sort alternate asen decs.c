#include<stdio.h>
#include<stdlib.h>
struct node

{
    int data;
    struct node* next;
};
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
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=*l;
    ptr->data=item;
    *l=ptr;
}
void split(struct node* l,struct node** al,struct node** bl)
{
    struct node* temp=*l;
    struct node* ah=*l;
    struct node* bh=ah->next;
}
void sortlist(struct node** l)
{
    struct node *al,*bl;
    split(*l,&al,&bl);
    rever(bl);
    merge(al,bl);
}
int main()
{
    struct node* l=NULL;
    add(&l,89);add(&l,12);add(&l,67);add(&l,30);add(&l,53);add(&l,40);add(&l,10);
    print(l);
    sortlater(&l);
    return 0;
}
