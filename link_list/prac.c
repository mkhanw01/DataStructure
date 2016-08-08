#include<malloc.h>
#include<stdio.h>
struct node
        {
             int data;
             struct node* next;
        };
         typedef struct node* NODE;
         NODE head=NULL;
    void pushbeg(NODE* head,int item)
    {
        NODE n=(NODE)malloc(sizeof(struct node));
        n->data=item;
        n->next=*head;
        *head=n;
       // return head;
    }
    void print(struct node *node)
    {
        //NODE ptr=head;
        while(node!=NULL)
        {
         printf("%d->",node->data);
         node=node->next;
        }
    }
        int main()
        {
            pushend(&head,2);
            pushend(&head,9);
            pushend(&head,34);
             pushbeg(&head,10);
             pushbeg(&head,40);
             pushbeg(&head,100);
             pushbeg(&head,-10);
             pushbeg(&head,1);
             print(head);
            return 0;
        }
