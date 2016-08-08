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
void LV(struct node *root,int le,int *ml)
{
  if(root==NULL) return;
  if(*ml<le)
  {
      printf("%d\t",root->data);
      *ml=le;
  }
  LV(root->left,le+1,ml);
  LV(root->right,le+1,ml);
}
void leftview(struct node *root)
{
    int le=1,mle=0;
    LV(root,le,&mle);
}
int main()
{
    struct node *root=newnode(12);
    root->left=newnode(10);
    root->right=newnode(30);
    root->right->left=newnode(25);
    root->right->right=newnode(40);
    leftview(root);
    return 0;
}
