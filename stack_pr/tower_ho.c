#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of disks..");
    scanf("%d",&n);
    char a,b,c;
    a='A';
    b='B';
    c='C';
    tower(n,a,b,c);
         return 0;
}
void tower(int n,char A,char B,char C)
{
    if(n==1)

    tower(n-1,A,C,B);
    tower(n-1,B,A,C)
}
