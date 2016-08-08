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
int diff(struct node *root)
{
    if(root==NULL)
        return 0;
    return root->data-diff(root->left)-diff(root->right);
}
int  main()
{
    struct node *root=newnode(5);
    root->left=newnode(2);
    root->right=newnode(6);
    root->left->left=newnode(1);
    root->left->right=newnode(4);
    root->right->right=newnode(8);
    printf("diff is %d",diff(root));
    return 0;
}
