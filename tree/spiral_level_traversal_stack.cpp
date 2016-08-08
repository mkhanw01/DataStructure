#include<iostream>
#include<stack>
using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};
struct node* newnode(int data)
{
    struct node* node=new struct node;
    node->data=data;
    node->left=node->right=NULL;
    return node;
}
void printspiral(struct node* tr)
{
    if(tr==NULL)
        return;
    stack<struct node*>s1;
    stack<struct node*>s2;
    s1.push(tr);
    struct node* temp;
    while(!s1.empty()||!s2.empty())
    {
        while(!s1.empty())
        {
            temp=s1.top();
            s1.pop();
            cout<<temp->data<<" ";
            if(temp->right)
                s2.push(temp->right);
            if(temp->left)
                s2.push(temp->left);
        }
        while(!s2.empty())
        {
           temp=s2.top();
           s2.pop();
           cout<<temp->data<<" " ;
           if(temp->left)
            s1.push(temp->left);
           if(temp->right)
            s1.push(temp->right);
        }
    }
}
int main()
{
    struct node *tr=newnode(1);
    tr->left=newnode(2);
    tr->right=newnode(3);
    tr->left->left=newnode(7);
    tr->left->right=newnode(6);
    tr->right->right=newnode(4);
    tr->right->left=newnode(5);
    printspiral(tr);
    return 0;
}
