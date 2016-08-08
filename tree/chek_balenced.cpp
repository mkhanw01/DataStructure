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
int maxi(int a,int b)
{
    return (a>=b)?a:b;
}
int hieght(struct node* tr)
{
    if(tr==NULL)
        return 0;
    return 1+maxi(hieght(tr->left),hieght(tr->right));
}
int balence(struct node* tr)
{
    if(tr==NULL)
        return 1;
    int lh,rh;
    lh=hieght(tr->left);
    rh=hieght(tr->right);
    if(abs(lh-rh)<=1 &&(balence(tr->left))&&(balence(tr->right)))
        return 1;
        return 0;
}
int main()
{
    struct node* tr=newnode(12);
    tr->left=newnode(21);
    tr->right=newnode(23);
    tr->left->left=newnode(11);
    tr->left->right=newnode(10);
    tr->left->right->right=newnode(4);
  //  tr->right->right=newnode(20);
    if(balence(tr))
        printf("balenced..");
    else
        printf("not balenced..");
    return 0;
}
