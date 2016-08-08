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
int chek_sum(struct node* tr,int num)
{
    if(tr==NULL)
        return (num=0);
        else
        {
            bool ans=0;
            int subsum=num-tr->data;
            if(subsum==0 &&tr->left==NULL && tr->right==NULL)
                return 1;
            if(tr->left)
                ans=ans||chek_sum(tr->left,subsum);
            if(tr->right)
                ans=ans||chek_sum(tr->right,subsum);
            return ans;
        }

}
int main()
{
    struct node* tr=newnode(10);
    tr->left=newnode(8);
    tr->right=newnode(2);
    tr->right->left=newnode(2);
    tr->left->left=newnode(3);
    tr->left->right=newnode(5);
    chek_sum(tr,24)==1?printf("satisfy"):printf("unsatisfy");
    return 0;
}
