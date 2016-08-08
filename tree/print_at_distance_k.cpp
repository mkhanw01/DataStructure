#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node* newnode(int data)
{
    struct node *cur=(struct node*)malloc(sizeof(struct node));
    cur->left=NULL;
    cur->right=NULL;
    cur->data=data;
    return cur;
}
void printatk(struct node *root,int k)
{
    if(root==NULL)
        return ;
    if(k==0)
    {
     printf("%d\t",root->data);
     return;
    }
    else
    {
        printatk(root->left,k-1);
        printatk(root->right,k-1);
    }
}
int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->left->right=newnode(5);
    root->right->left=newnode(6);
    root->right->right=newnode(7);
    printatk(root,2);
    return 0;
}
