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
void print(int path[],int len)
{
    int i=0;
    for(;i<len;i++)
        printf("%d",path[i]);
    printf("\n");
}
void printrecpath(struct node* tr,int path[],int len)
{
    if(tr==NULL)
        return;
    path[len++]=tr->data;
    if(tr->left==NULL && tr->right==NULL)
         print(path,len);
    else
    {
    printrecpath(tr->left,path,len);
    printrecpath(tr->right,path,len);
    }
}
void printpath(struct node* tr)
{
    int path[1000];
    printrecpath(tr,path,0);
}
int main()
{
    struct node* tr=newnode(1);
    tr->left=newnode(2);
    tr->left->left=newnode(4);
    tr->left->right=newnode(5);
    tr->right=newnode(3);
    tr->right->left=newnode(10);
    printpath(tr);
    return 0;
}
