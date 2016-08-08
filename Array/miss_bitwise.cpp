#include<stdio.h>
int sum(int a[],int s)
{
    int x1=a[0];
    int x2=1;
    for(int i=1;i<s;i++)
        x1=x1^a[i];
    for(int i=2;i<=s+1;i++)
        x2=x2^i;
    return x1^x2;
}
int main()
{
    int arr[]={1,2,3,4,6,7};
    printf(" missing no is%d",sum(arr,6));
    return 0;
}
