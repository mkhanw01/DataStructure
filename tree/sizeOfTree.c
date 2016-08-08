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
int size(struct node* tree)
{
    if(tree==NULL)
        return 0;
    else
    {
        return(size(tree->left)+1+size(tree->right));
    }
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
    printf("size of tree %d",size(root));
return 0;
}
