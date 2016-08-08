#include<stdlib.h>
#include<stdio.h>
#include<stack>
using namespace std;
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
int traverse(struct node* tr)
{
    stack<int>s;
    bool done=0;
    struct node* curr=tr;
    while(!done)
    {
        if(curr!=NULL)
        {
            s.push(curr->data);
            curr->left;
        }
        else
        {
            if(!s.empty())
            {
               curr->data=s.top();
               printf("%d",curr->data);
               s.pop();

                curr=curr->right;
            }
            else
                done=1;

        }
    }
}
int main()
{
    struct node* tr=newnode(12);
    tr->left=newnode(21);
    tr->right=newnode(23);
    tr->left->left=newnode(11);
    tr->left->right=newnode(10);
    tr->left->right->right=newnode(4);
    traverse(tr);
    return 0;
}
