#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node* newnode(int data)
{
  struct node* tr=(struct node*)malloc(sizeof(struct node));
  tr->data=data;
  tr->left=tr->right=NULL;
  return tr;
}
int isleaf(struct node* root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL&&root->right==NULL)
        return 1;
    return 0;
}
int isSum(struct node* root)
{
  int ls,rs;
  if(root==NULL||isleaf(root))
    return 1;
  if(isSum(root->left)&&isSum(root->right))
  {
      if(root->left==NULL)
        ls=0;
      else if(isleaf(root->left))
      ls=root->left->data;
      else
        ls=2*(root->left->data);
      if(root->right==NULL)
        rs=0;
      else if(isleaf(root->right))
        rs=root->right->data;
      else
        rs=2*(root->right->data);
      return (root->data==ls+rs);
  }
  return 0;
}
int main()
{
    struct node *tr=newnode(26);
    tr->left=newnode(10);
    tr->right=newnode(3);
    tr->left->left=newnode(4);
    tr->left->right=newnode(6);
    tr->right->left=newnode(3);
    isSum(tr)?printf("follow.."):printf("not follow");
    return 0;
}

