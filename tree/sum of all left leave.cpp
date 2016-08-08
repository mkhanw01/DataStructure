#include<stdlib.h>
#include<malloc.h>
//using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};
bool isleaf(struct node* root)
{
    if(root==NULL)
        return false;
    if((root->left==NULL) && (root->right==NULL))
        return true;
    return false;
}
int leavesum(struct node* root)
{
    int res=0;
    if(root!=NULL)
    {
     if(isleaf(root->left)
        res+=root->left->data;
    }

}
struct node* newnode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
int main()
{
    struct node *root=newnode(20);
    root->left=newnode(9);
    root->left->left=newnode(5);
    root->left->right=newnode(12);
    root->left->right->right=newnode(15);
    root->right=newnode(49);
    root->right->left=newnode(23);
    root->right->right=newnode(52);
    root->right->right->left=newnode(50);

    return 0;
}
