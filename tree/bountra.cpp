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
void PRB(struct node* root)
{
  if(root)
  {
      if(root->right)
      {
          PRB(root->right);
          printf("%d\t",root->data);
      }
      else if(root->left)
      {
          PRB(root->left);
          printf("%d\t",root->data);
      }

  }
}
void PLN(struct node* root)
{
    if(root==NULL)
       return;
    if(root->left==NULL && root->right==NULL)
        printf("%d\t",root->data);
    PLN(root->left);
    PLN(root->right);
}
void PLB(struct node* root)
{
    if(root)
    {
        if(root->left)
        {
            printf("%d\t",root->data);
            PLB(root->left);
        }
        else if(root->right)
        {
            PLB(root->right);
            printf("%d\t",root->data);
        }
    }
}
void boundary(struct node* root)
{
    if(root)
    {
        printf("%d\t",root->data);
        PLB(root->left);
        PLN(root->left);
        PLN(root->right);
        PRB(root->right);
    }
}
int main()
{
    struct node *tr=newnode(20);
    tr->left=newnode(8);
    tr->right=newnode(22);
    tr->left->left=newnode(4);
    tr->left->right=newnode(12);
    tr->right->right=newnode(25);
    tr->left->right->left=newnode(10);
    tr->left->right->right=newnode(14);
    boundary(tr);
    return 0;
}
