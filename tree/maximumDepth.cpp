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
int maxdepth(struct node* tr)
{
    if(tr==NULL)
        return 0;
    else
    {
        int ldep=maxdepth(tr->left);
        int rdep=maxdepth(tr->right);
        printf("%d\t",tr->data);
        if(ldep>rdep)
            return (ldep+1);
        else
            return (rdep+1);
    }
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
    tr->left->right->right->right->right=newnode(45);
    printf("maximum depth..%d",maxdepth(tr));
    return 0;
}
