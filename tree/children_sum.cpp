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
int sumchild(struct node* tr)
{
    int ldata=0,rdata=0;
    if(tr==NULL ||(tr->left==NULL && tr->right==NULL))
        return 1;
        else
        {
           if(tr->left!=NULL)
               ldata=tr->left->data;
           if(tr->right!=NULL)
            rdata=tr->right->data;
            if((tr->data==ldata+rdata) &&(sumchild(tr->left)&&(sumchild(tr->right))))
            return 1;
             else
          return 0;
       }
}

int main()
{
    struct node *tr=newnode(10);
    tr->left=newnode(8);
    tr->right=newnode(2);
    tr->left->left=newnode(5);
    tr->left->right=newnode(3);
    tr->right->left=newnode(2);
    sumchild(tr)?printf("follow the child sum pro"):printf("not follo the sum child pro");
    return 0;
}
