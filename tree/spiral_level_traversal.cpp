#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node* newnode(int data)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->left=n->right=NULL;
    n->data=data;
    return n;
}
int hight(struct node* tr)
{
    if(tr==NULL)
        return 0;
      int ldep=hight(tr->left);
      int rdep=hight(tr->right);
      if(ldep>rdep)
        return ldep+1;
      else
        return rdep+1;
}
void printlevel(struct node* tr,int level,bool ltr)
{
 if(tr==NULL)
    return;
 if(level==1)
    printf("%d\t",tr->data);
 else if(level>1)
 {
     if(ltr)
     {
         printlevel(tr->left,level-1,ltr);
         printlevel(tr->right,level-1,ltr);
     }
     else
     {
         printlevel(tr->right,level-1,ltr);
         printlevel(tr->left,level-1,ltr);
     }
 }
}
void spirallevel(struct node* tr)
{
    int h=hight(tr);
    bool ltr=false;
    for(int i=1;i<=h;i++)
    {
       printlevel(tr,i,ltr);
       ltr=!ltr;
    }
}
int main()
{
    struct node* tr=newnode(1);
    tr->left=newnode(2);
    tr->right=newnode(3);
    tr->left->left=newnode(7);
    tr->left->right=newnode(6);
    tr->right->right=newnode(4);
    tr->right->left=newnode(5);
    spirallevel(tr);
    return 0;
}
