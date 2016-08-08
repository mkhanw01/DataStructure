#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
    bool rightmost;
};
struct node* newnode(int data);
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->left=n->right=NULL;
    n->data=data;
    return n;
}
void inorder(struct node* n)
{
    struct node* cur=leftmost(n);
}
int main()
{
    struct node *root=newnode(6);
    root->left=newnode(3);
    root->left->left=newnode(1);
    root->left->right=newnode(5);
    root->right=newnode(8);
    root->right->right=newnode(11);
    root->right->right->right=newnode(13);
    root->right->right->left=newnode(9);
    root->right->left=newnode(7);
    inorder(root);
    return 0;
}
