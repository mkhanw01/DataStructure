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
int SAP(struct node *root,int val)
{
    if(root==NULL)
        return 0;
        val=val*10+root->data;
    if(root->left==NULL && root->right==NULL)
        return val;
    return (SAP(root->left,val)+SAP(root->right,val));
}
int sum(struct node *root)
{
    return SAP(root,0);
}
int main()
{
    struct node *root=newnode(2);
    root->left=newnode(1);
    root->right=newnode(3);
    root->right->left=newnode(5);
    root->right->right=newnode(4);
    printf(" sum of numbers..=%d",sum(root));
    return 0;
}
