#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
using namespace std;
struct stacknode
{
    int val;
    stacknode* next;
};
void push(struct stacknode** root,int data)
{
    struct stacknode* newnode=(struct stacknode*)malloc(sizeof(struct stacknode));
    newnode->val=data;
    newnode->next=NULL;
    newnode->next=*root;
    *root=newnode;
    printf("\n push item is %d",data);
}
int isEmpty(struct stacknode *root)
{
    return !root;
}
int pop(struct stacknode** root)
{
    if(isEmpty(*root))
        return INT_MIN;
    struct stacknode* temp=*root;
    *(root)=(*root)->next;
   return temp->val;
    free(temp);
}
int peek(struct stacknode** root)
{
    if(isEmpty(*root))
        return INT_MIN;
    return (*root)->val;
}
int main()
{
    struct stacknode* root=NULL;
    push(&root,29);
    push(&root,54);
    push(&root,64);
    printf("\npop item is %d",pop(&root));
    peek(&root);
    push(&root,80);
    printf("\n the top most item is %d",peek(&root));
    printf("\n pop item is %d",pop(&root));
    printf("\n the top most item is %d",peek(&root));
    return 0;
}
