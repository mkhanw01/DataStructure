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
    if(root)
    {
        int l=hight(root->left);
        int r=hight(root->right);
        return l>r?l+1:r+1;
    }
}
int w(struct node* root,int level)
{
    if(root==NULL)
       return 0;
    if(level==1)
        return 1;
    else if(level>1)
    {
        return w(root->left,level-1)+w(root->right,level-1);
    }
}
int maxwidth(struct node* root)
{
    int maxwi=0;
    int widht;
    int h=hight(root);
    int i;
    for(i=1;i<=h;i++)
    {
        widht=w(root,i);
        if(widht>maxwi)
            maxwi=widht;
    }
    return maxwi;

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
