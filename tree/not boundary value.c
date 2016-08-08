#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
void printleave(struct node* root)
{
    if(root)
    {
        printleave(root->left);
        if((root->left) && (root->right))
        {
            //printf("%d\t",root->left->data);
            printf("%d\t",root->data);
        }


        printleave(root->right);

    }
}
/*void printbouright(struct node* root)
{
    if(root)
    {
        if(root->right)
        {
            printbouright(root->right);
           // printf("%d\t",root->data);
        }
        else if(root->left)
        {
            printbouright(root->left);
            //printf("%d\t",root->data);
        }
    }
}
*/
/*void printbouleft(struct node* root)
{
    if(root)
    {
        if(root->left)
        {
           // printf("%d\t",root->data);
            printbouleft(root->left);
        }
       else if(root->right)
        {
           // printf("%d\t",root->data);
            printbouleft(root->left);
        }
    }
}
*/
/*void printboundary(struct node* root)
{
    if(root)
    {
       // printf("%d\t",root->data);
        printbouleft(root->left);
        printleave(root->left);
        printleave(root->right);
        printbouright(root->right);
    }
}
*/
struct node* newnode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
int main()
{
    struct node* root=newnode(20);
    root->left=newnode(8);
    root->left->left=newnode(4);
    root->left->right=newnode(12);
    root->left->right->left=newnode(10);
    root->left->right->right=newnode(14);
    root->right=newnode(22);
    root->right->right=newnode(25);
    printleave(root->left);
    printleave(root->right);
    return 0;
}
