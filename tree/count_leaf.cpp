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
int countleaf(struct node* tr)
{
    if(tr==NULL)
        return 0;
    if(tr->left==NULL&&tr->right==NULL)
        return 1;
    else

        return(countleaf(tr->left)+countleaf(tr->right));
}
int main()
{
    struct node* tr=newnode(6);
    tr->left=newnode(3);
    tr->left->left=newnode(1);
    tr->left->right=newnode(5);
    tr->right=newnode(8);
    tr->left->right->right=newnode(30);
    tr->left->right->right->right=newnode(40);
    tr->right->right=newnode(45);
   printf(" no of leaf node.. %d",countleaf(tr));
    return 0;
}
