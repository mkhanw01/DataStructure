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
bool isomprphic(struct node* n1,struct node* n2)
{
  if(n1==NULL && n2==NULL)
    return true;
  if(n1==NULL ||n2==NULL)
    return false;
if(n1->data!=n2->data)
    return false;
return ((isomprphic(n1->left,n2->left)&&isomprphic(n1->right,n2->right))||
       (isomprphic(n1->left,n2->right)&&isomprphic(n1->right,n2->left)));
}
int main()
{
    struct node *root=newnode(10);
    root->left=newnode(20);
    root->right=newnode(30);
    root->left->right=newnode(40);
    root->right->left=newnode(50);
    struct node *root1=newnode(10);
    root1->left=newnode(30);
    root1->right=newnode(20);
    root1->left->right=newnode(50);
    root1->right->left=newnode(40);
    isomprphic(root,root1)?printf("yes.."):printf("no");
    return 0;
}
