#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left,*right;

};
struct node* newnode(int data)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}
int hight(struct node* root)
{
    if(root==NULL)
        return 0;
    else
    {
        int l=hight(root->left);
        int r=hight(root->right);
         return l>r?(l+1):(r+1);
    }
}
void getwidth(struct node* root,int con[],int level)
{
    if(root)
    {
     con[level]++;
     getwidth(root->left,con,level+1);
     getwidth(root->right,con,level+1);
    }
}
int ma(int con[],int h)
{
    int m=con[0];
    for(int i=1;i<h;i++)
    {
        if(con[i]>m)
            m=con[i];
    }
    return m;
}
int maxwidth(struct node *root)
{
    if(root)
    {
        int h=hight(root);
        int *con=(int *)calloc(sizeof(int),h);
        int level=0;
        getwidth(root,con,level);
      return ma(con,h);
    }
}
int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(5);
    root->left->right=newnode(6);
    root->right->right=newnode(4);
    root->left->right->left=newnode(8);
    printf("%d",maxwidth(root));
    return 0;
}
