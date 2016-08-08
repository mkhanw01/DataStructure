#include<stdio.h>
#include<malloc.h>
#include<stack>
using namespace std;
stack<char> s;
struct node
{
    char data;
    struct node* next;
};
void comp(struct node* head)
{
  int flag=0;
  struct node* ptr=head;
  while(ptr!=NULL)
  {
      if(ptr->data==(char)s.top())
      {
          flag=1;
           s.pop();
           ptr=ptr->next;
      }
      else
          flag=0;
  }
  if(flag==1)
    printf("palindrome");
  else
  printf("not palindrom");
}
void trav(struct node* head)
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        s.push(ptr->data);
        ptr=ptr->next;
    }
    comp(head);
}
void add(struct node** head_ref,char ch)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=(*head_ref);
    ptr->data=ch;
    (*head_ref)=ptr;
}
int main()
{
    struct node* head=NULL;
    int i;
    char str[]="abcdcba";
    for(i=0;str[i]!='\0';i++)
    {
        add(&head,str[i]);
    }
      trav(head);
return 0;
}
