#include<stdio.h>
#define max_size 101
int a[max_size];
int top=-1;
int push(int x)
{
    if(top==max_size-1)
    {
        printf("over flow....");
        return 0;
    }
    else
        a[++top]=x;
        return;
}
int pop()
{
    if(top==-1)
    {
        printf("stac is underflow..");
        return 0;
    }
    else
    {
        printf(" poped item is %d\n",a[top]);
        top--;
    }

        return;
}
int  print()
{
    int i=0;
    for(;i<=top;i++)
        printf("%d\t",a[i]);
        printf("\n");
        return;
}
int main()
{
    push(10);print();
    push(4);print();
    pop();print();
    push(-10);print();
    push(21);print();
    pop();print();
    return 0;
}
