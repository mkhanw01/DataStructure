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
void inorder(struct node* tr)
{
    if(tr==NULL)
        return;
    inorder(tr->left);
    printf("%d\t",tr->data);
    inorder(tr->right);
}
void increment(struct  node* tr,int diff)
{
  if(tr->left!=NULL)
  {
      tr->left->data+=diff;
      increment(tr->left,diff);
  }
  else if(tr->right!=NULL)
  {
      tr->right->data+=diff;
      increment(tr->right,diff);
  }
}
void changetosum(struct node* tr)
{
    int ldata=0,rdata=0,diff;
    if(tr==NULL ||(tr->left==NULL && tr->right==NULL))
        return;
    changetosum(tr->left);
    changetosum(tr->right);
    if(tr->left!=NULL)
        ldata=tr->left->data;
    if(tr->right!=NULL)
        rdata=tr->right->data;
     diff=((rdata+ldata)-(tr->data));
    if(diff>0)
        tr->data+=diff;
    if(diff<0)
        increment(tr,-diff);
}
int main()
{
    struct node* tr=newnode(50);
    tr->left=newnode(7);
    tr->right=newnode(20);
    tr->right->left=newnode(1);
    tr->left->left=newnode(3);
    tr->left->right=newnode(5);
    tr->right->right=newnode(30);
    inorder(tr);
    changetosum(tr);
    printf("\n after changing\n");
    inorder(tr);
    return 0;
}
