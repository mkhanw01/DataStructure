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
    return (ldep>rdep?ldep+1:rdep+1);
}
void printgivenlevel(struct node* tr,int level)
{
    if(tr==NULL)
        return;
    if(level==1)
        printf("%d\t",tr->data);
    else if(level>1)
    {
        printgivenlevel(tr->left,level-1);
        printgivenlevel(tr->right,level-1);
    }
}
void leveltraverse(struct node* tr)
{
  int h=hight(tr);
  for(int i=h;i>=1;i--)
  printgivenlevel(tr,i);
}
int main()
{
    struct node* tr=newnode(6);
    tr->left=newnode(3);
    tr->left->left=newnode(1);
    tr->left->right=newnode(5);
    tr->right=newnode(8);
    tr->left->right->right=newnode(30);
    tr->left->right->right->right=newnode(40);
    tr->right->right=newnode(45);
    leveltraverse(tr);
    return 0;
}
