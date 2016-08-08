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
void PRV(struct node *root,int le,int *me)
{
  if(root==NULL) return;
  if(le>*me)
  {
      printf("%d\t",root->data);
      *me=le;
  }
  PRV(root->right,le+1,me);
  PRV(root->left,le+1,me);
}
void rightview(struct node *root)
{
    int   le=1,me=0;
    PRV(root,le,&me);
}
int main()
{
    struct node *root=newnode(12);
    root->left=newnode(10);
    root->right=newnode(30);
    root->right->left=newnode(25);
    root->right->right=newnode(40);
    root->right->left->right=newnode(35);
    rightview(root);
    return 0;
}
