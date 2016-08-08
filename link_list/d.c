#include<stdio.h>
#include<malloc.h>
struct node
{ int info;
struct node *link;
};
struct node* start=NULL;
int show(struct node** start,int data)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
temp->link=NULL;
printf("%d",temp->info);
}

void main()
{int data;
printf("enter the value");
scanf("%d",&data);
show(&start,data);
return 0;
}
