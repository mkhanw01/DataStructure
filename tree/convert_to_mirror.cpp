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
void mirror(struct node* tr)
{
    if(tr==NULL)
        return;
    else
    {
        struct node* temp;
        mirror(tr->left);
        mirror(tr->right);
        temp=tr->left;
        tr->left=tr->right;
        tr->right=temp;

    }
}
void inorder(struct node* tr)
{
    if(tr==NULL)
        return;
    inorder(tr->left);
    printf("%d\t",tr->data);
    inorder(tr->right);

}
void mirr(struct node* tr)
{
    if(tr==NULL)
        return;
    mirr(tr->right);
    printf("%d\t",tr->data);
    mirr(tr->left);
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
    inorder(tr);
    printf("\nmirror order traverse\n");
    mirr(tr);
    mirror(tr);
    printf("\n after the mirroring..\n");
    inorder(tr);
    return 0;
}
