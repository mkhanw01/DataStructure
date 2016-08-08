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
struct node* minvalue(struct node* root)
{
    struct node* cur=root;
    while(cur->left!=NULL)
        cur=cur->left;
    return cur;
}
struct node* del(struct node* root,int key)
{
  if(root==NULL)
    return root;
    if(key<root->key)
        root->left=del(root->left,key);
        else if(key>root->key)
            root->right=del(root->right,key);
        else
        {
            struct node* temp;
            if(root->left==NULL)
            {
                temp=root->right;
                free(root);
                return temp;
            }
            else if(root->right=NULL)
            {
                temp=root->left;
                free(root);
                return temp;
            }
            temp=minvalue(root->right);
            root->key=temp->key;
            root->right=del(root->right,key);
        }
        return root;
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
int main()
{
    struct node* root=NULL;
    root=ins(root,50);
    root=ins(root,30);
    root=ins(root,20);
    root=ins(root,70);
    root=ins(root,60);
    root=ins(root,80);
    root=ins(root,40);
    inorder(root);
    root=del(root,20);
    printf("after modified..\n");
    inorder(root);
    return 0;
}
