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
int printatlevel(struct node *root,int data,int level)
{
    if(root==NULL)
        return 0;
    if(root->data==data)
        return level;
        int l=printatlevel(root->left,data,level+1);
        if(l!=0)
        return l;
        l=printatlevel(root->right,data,level+1);
          return l;
}
int printlevel(struct node *root,int data)
{
    return printatlevel(root,data,1);
}
int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(5);
    root->left->right=newnode(6);
    root->right->right=newnode(4);
    root->right->left=newnode(7);
    printf("level is %d",printlevel(root,4));
    return 0;
}
