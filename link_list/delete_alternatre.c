#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
void print(struct node* h)
{
    struct node* ptr=h;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void delet(struct node* head)
{
    if(head==NULL)
        return;
    struct node* temp=head->next;
    if(temp==NULL)
        return;
        head->next=temp->next;
        free(temp);
        delet(head->next);
}
void push(struct node** h,int item)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=*h;
    ptr->data=item;
    *h=ptr;
}
int main()
{
    struct node* a=NULL;
    push(&a,11);push(&a,7);push(&a,5);push(&a,2);//push(&a,1);
    print(a);
    delet(a);
    print(a);
}
