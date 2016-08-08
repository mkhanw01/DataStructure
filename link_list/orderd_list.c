#include<stdio.h>
#include<malloc.h>
#include<process.h>
typedef struct node
{
    int data;
    struct node *link;
}NODE;
//typedef struct node* NODE;



void insert(NODE *head,int item)
{
    NODE *cur,*pre,*new;
    new=getnode();
    new->data=item;
    new->link=NULL;
    if(head==NULL)
        head=new;
    if(item<head->data)
    {
        new->link=head;
         new;
    }
    pre=NULL;
    cur=head;
    while(cur!=NULL&&item>cur->data)
    {
        pre=cur;
        cur=cur->link;
    }
    pre->link=new;
    new->link=cur;
    return head;
}
NODE *getnode()
{
    NODE *x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("out of memeory..");
        exit(0);
    }
    return x;
}
int display(NODE head)
{
    NODE cur;
    cur=head;
    if(head==NULL)
    {
        printf("list is empty...\n");
        return 0;
    }
    while(cur!=NULL)
    {
        printf("%d\t",cur->data);
        cur=cur->link;
    }
}



int main()
{

    int item,choice;
    NODE *head=NULL;
    while(1)
    {
        printf("1->add an element..\n");
        printf("2->display an list.\n");
        printf("3->exit\n");
        printf("enter your choice..");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter the item..");
                    scanf("%d",&item);
                    //head=
                    insert(head,item);
                    break;
            case 2: display(head);
                    break;
            case 3: exit(0);
                    break;
            default: return 0;

        }
    }
return 0;
}
