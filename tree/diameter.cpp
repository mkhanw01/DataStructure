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
int maximum(int a,int b)
{
    return (a>b)?a:b;
}
int hight(struct node* tr)
{
    if(tr==NULL)
        return 0;
    return 1+maximum(hight(tr->left),hight(tr->right));
}
int diameter(struct node* tr)
{
    if(tr==NULL)
        return 0;
    int lhi=hight(tr->left);
    int rhi=hight(tr->right);
    int ldim=diameter(tr->left);
    int rdim=diameter(tr->right);
    return maximum(lhi+rhi+1,maximum(ldim,rdim));
}
int main()
{
    struct node* tr=newnode(12);
    tr->left=newnode(21);
    tr->right=newnode(23);
    tr->left->left=newnode(11);
    tr->left->right=newnode(10);
    tr->left->right->right=newnode(4);
    printf("%d",diameter(tr));
    return 0;
}
