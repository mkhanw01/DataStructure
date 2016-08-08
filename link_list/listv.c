#include<stdlib>
#include<algorithm>
#include<stdio.h>
struct node
{
    int data;
    struct *node next;
};
  void pushdata(struct node** hedref,int newdata)
  {
   struct node* newdata=(struct node*)malloc(sizeof(struct node));
   newdata->data=newdata;
   newdata->next=(*headref);
   (*headref)=newdata;
  }
  void afterpoint(struct node** headref,int newdata)
