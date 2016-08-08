#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node* newnode(int data)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}
bool printlevel(struct node* root,int data)
{
    if(root==NULL)
        return false;
    if(root->data==data)
        return true;
    if(printlevel(root->left,data)||printlevel(root->right,data))
    {
        printf("%d\t",root->data);
        return true;
    }
    return false;
}
int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(5);
    root->left->right=newnode(6);
    root->right->right=newnode(4);
    root->left->right->left=newnode(8);
    printlevel(root,4);
    return 0;
}
