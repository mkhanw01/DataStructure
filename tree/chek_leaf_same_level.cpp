#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node *newnode(int data)
{
    struct node *node=(struct node *)malloc(sizeof(struct node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}
bool leaf(struct node *root,int le,int *lef)
{
    if(root==NULL)return true;
    if(root->left==NULL &&root->right==NULL)
    {
        if(*lef==0)
        {
            *lef=le;
            return true;
        }
        return(*lef==le);
    }
    return leaf(root->left,le+1,lef)&&
    leaf(root->right,le+1,lef);
}
bool printuti(struct node *root)
{
    int le=0,lef=0;
    return leaf(root,le,&lef);
}
int main()
{
    struct node *root=newnode(12);
    root->left=newnode(5);
    root->left->left=newnode(3);
    root->right=newnode(7);
    root->right->right=newnode(8);
    inorder(root);
    printuti(root)?printf("same level"):printf("diff level");
    return 0;
}
