#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
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
bool ispath(struct node *root,vector<int>&p,int n)
{
    if(root==NULL)
        return false;
    p.push_back(root->data);
    if(root->data==n)
        return true;
        if(root->left&&ispath(root->left,p,n)
           ||root->right&&ispath(root->right,p,n))
            return true;
}
int lca(struct node *root,int n1,int n2)
{
 vector<int> p1,p2;
 if(!ispath(root,p1,n1)||!ispath(root,p2,n2))
    return -1;
    for(int i=0;i<p1.size();i++)
        //cout<<*p1<<"\t";
}
int main()
{
    struct node *tr=newnode(1);
    tr->left=newnode(2);
    tr->right=newnode(3);
    tr->left->left=newnode(4);
    tr->left->right=newnode(5);
    tr->right->left=newnode(6);
    tr->right->right=newnode(7);
    printf("%d\t"lca(tr,4,7));
    return 0;
}
