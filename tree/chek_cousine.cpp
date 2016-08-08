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
int isSibling(struct node *root,struct node *a,struct node *b)
{
    if(root==NULL) return 0;
    return ((root->left==a && root->right==b)||
            (root->left==b && root->right==a)||
                isSibling(root->left,a,b)||
                 isSibling(root->right,a,b));
}
int level(struct node *root,struct node *ptr,int le)
{
    if(root==NULL) return 0;
    if(root==ptr) return le;
    int l=level(root->left,ptr,le+1);
    if(l!=0) return l;
    return level(root->right,ptr,le+1);
}
int isCousine(struct node *root,struct node *a,struct node *b)
{
    if(level(root,a,1)==level(root,b,1)&& !isSibling(root,a,b))
        return 1;
    else
        return 0;
}
int main()
{
    struct node *root=newnode(6);
    root->left=newnode(3);
    root->right=newnode(5);
    root->right->right=newnode(3);
    root->right->left=newnode(1);
    root->left->left=newnode(7);
    root->left->right=newnode(8);
    struct node *n1,*n2;
    n1=root->left->left;
    n2=root->right;
    isCousine(root,n1,n2)?printf("yes.."):printf("no..");
    return 0;
}
