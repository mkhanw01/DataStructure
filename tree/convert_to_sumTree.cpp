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
void inorder(struct node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}
int conSum(struct node* root)
{
    if(root==NULL)
        return 0;
    int old_value=root->data;
    root->data=conSum(root->left)+conSum(root->right);
    return old_value+root->data;
}
int main()
{
    struct node *root=newnode(10);
    root->left=newnode(-2);
    root->right=newnode(6);
    root->left->left=newnode(8);
    root->left->right=newnode(-4);
    root->right->right=newnode(7);
    root->right->left=newnode(5);
    conSum(root);
    inorder(root);
    return 0;
}
