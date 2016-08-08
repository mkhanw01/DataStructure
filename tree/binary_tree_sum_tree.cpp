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
int sum(struct node* root)
{
    if(root==NULL)
        return 0;
    return sum(root->left)+root->data+sum(root->right);
}
int isSum(struct node* root)
{
    int ls,rs;
    if(root==NULL||root->left==NULL&&root->right==NULL)
        return 1;
    ls=sum(root->left);
    rs=sum(root->right);
    if((root->data==ls+rs)&&isSum(root->left)&&isSum(root->right))
        return 1;
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
