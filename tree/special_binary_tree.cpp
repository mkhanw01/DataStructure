#include<stdio.h>
#include<stdlib.h>
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
int maxele(int ar[],int s,int en)
{
    int ma=ar[s],mai=s;
    for(int i=s+1;i<=en;i++)
    {
        if(ar[i]>ma)
        {
            ma=ar[i];
            mai=i;
        }
    }
    return mai;
}
void printinorder(struct node* root)
{
    if(root==NULL)
        return;
        printinorder(root->left);
        printf("%d\t",root->data);
        printinorder(root->right);

}
struct node* buildtree(int ar[],int s,int en)
{
    if(s>en)
        return NULL;
    int m=maxele(ar,s,en);
    struct node *root=newnode(ar[m]);
    if(s==en)
        return root;
    root->left=buildtree(ar,s,m-1);
    root->right=buildtree(ar,m+1,en);
    return root;
}
int main()
{
    int ino[]={5,10,40,30,28};
    int si=sizeof(ino)/sizeof(ino[0]);
    struct node* root=buildtree(ino,0,si-1);
    printf("after constructing..\n");
    printinorder(root);
    return 0;
}
