#include<stdio.h>
#include<stdlib.h>
//#include<thread>
//#include<chrono>
//using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};
struct node* newnode(int data)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->left=n->right=NULL;
    n->data=data;
    return n;
}
void del(struct node* tr)
{
    if(tr==NULL)
        return;
    del(tr->left);
    del(tr->right);
    //this_thread::sleep_for(chrono::second(1));
    //sleep(1000);
    printf("%d",tr->data);
    free(tr);

}
void _del(struct node** tr)
{
    del(*tr);
    *tr=NULL;
}
int main()
{
    struct node* tr=newnode(6);
    tr->left=newnode(3);
    tr->left->left=newnode(1);
    tr->left->right=newnode(5);
    tr->right=newnode(8);
    tr->left->right->right=newnode(30);
    tr->left->right->right->right=newnode(40);
    tr->left->right->right->right->right=newnode(45);
    _del(&tr);
    return 0;
}
