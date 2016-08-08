#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node * right;
};
struct node *newnode(int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
};
void inorder(struct node *root)
{
    if(root)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);

    }
}
void preorder(struct node *root)
{
    if(root)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    preorder(root);
    return 0;
}
