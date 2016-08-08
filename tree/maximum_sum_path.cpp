#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
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
bool printpath(struct node* root,struct node* target)
{
    if(root==NULL)
        return false;
    if(root==target || printpath(root->left,target)||printpath(root->right,target))
    {
      printf("%d\t",root->data);
      return true;
    }
    return false;
}
void targetleafe(struct node* root,int *maxsum,int curr,struct node** target)
{
    if(root==NULL)
        return ;
    curr+=root->data;
        if(root->left==NULL&&root->right==NULL)
        {
          if(curr>*maxsum)
          {
              *maxsum=curr;
              *target=root;
          }
        }
     targetleafe(root->left,maxsum,curr,target);
     targetleafe(root->right,maxsum,curr,target);
}
int maxsumpath(struct node* root)
{
    if(root==NULL)
        return 0;
    struct node* trget;
    int maxsum=INT_MIN;
   targetleafe(root,&maxsum,0,&trget);
    printpath(root,trget);
    return maxsum;
}
int main()
{
    struct node *tr=newnode(10);
    tr->left=newnode(-2);
    tr->right=newnode(7);
    tr->left->left=newnode(8);
    tr->left->right=newnode(-4);
    int su=maxsumpath(tr);
    printf("maximum sum is=%d",su);
    return 0;
}
