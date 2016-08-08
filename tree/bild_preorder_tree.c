#include<stdio.h>
#include<stdlib.h>
struct node
{
  struct node *left,*right;
  int data;
};
void inorder(struct node *node)
{
    if(node)
    {
        inorder(node->left);
        printf("%d  ",node->data);
        inorder(node->right);
    }
}
struct node* newnode(int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->left=NULL;
    ptr->right=NULL;
    ptr->data=item;
    return ptr;
}
struct node* buiildTree(int ar[],char ch[],int *st,int len)
{
  int index=*st;
  if(index==len)
    return NULL;
    struct node* temp=newnode(ar[index]);
    (*st)++;
    if(ch[index]=='N')
    {
        temp->left=buiildTree(ar,ch,st,len);
        temp->right=buiildTree(ar,ch,st,len);
    }
    return temp;
}
struct node* build(int arr[],char ch[],int len)
{
    int index=0;
   return buiildTree(arr,ch,&index,len);
}
int main()
{
    struct node *root=NULL;
    int arr[]={10,30,20,5,15};
    char ch[]={'N','N','L','L','L'};
    int len=sizeof(arr)/sizeof(arr[0]);
    root=build(arr,ch,len);
    printf("After building tree \n");
    inorder(root);
    return 0;
}


