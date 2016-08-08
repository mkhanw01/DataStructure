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
int identical(struct node* tr1,struct node* tr2)
{
    if(tr1==NULL && tr2==NULL)
        return 1;
    if(tr1!=NULL && tr2!=NULL)
    return(
               tr1->data==tr2->data
               &&
               identical((tr1->left),(tr2->left))
               &&
               identical((tr1->right),(tr2->right))
        );
}
int main()
{
    struct node *tr1=newnode(6);
    tr1->left=newnode(3);
    tr1->left->left=newnode(1);
    tr1->left->right=newnode(5);
    tr1->right=newnode(8);
    tr1->right->left=newnode(30);
    tr1->right->right=newnode(40);
    struct node *tr2=newnode(6);
    tr2->left=newnode(3);
    tr2->left->left=newnode(1);
    tr2->left->right=newnode(5);
    tr2->right=newnode(8);
    tr2->right->left=newnode(30);
    tr2->right->right=newnode(40);
    identical(tr1,tr2)?printf("tree are identical "):printf(" not identical");
return 0;
}

