#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left,*right;
};
void inorder(struct node *root)
{
    if(root)
    {
        inorder(root->left);
        printf("%d\t",root->key);
        inorder(root->right);
    }
}
struct node *newnode(int key)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->key=key;
    node->left=node->right=NULL;
    return node;
}
struct node* ins(struct node* node,int key)
{
 if(node==NULL)
    return newnode(key);
    if(key<node->key)
        node->left=ins(node->left,key);
    else
        node->right=ins(node->right,key);
    return node;
}
int mini(struct node* root)
{
    while(root->left!=NULL)
        root=root->left;
    return root->key;
}
int main()
{
    struct node* root=NULL;
    root=ins(root,50);
    root=ins(root,30);
    root=ins(root,20);
    root=ins(root,70);
    root=ins(root,-60);
    root=ins(root,80);
    root=ins(root,40);
    printf("minimum elements in bst=%d\n",mini(root));
    inorder(root);
    return 0;
}
