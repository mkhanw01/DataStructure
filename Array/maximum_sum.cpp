#include<stdio.h>
int maxSum(int ar[],int n)
{
    int ex=ar[0];
    int x=0,nex;
    for(int i=1;i<n;i++)
    {
        nex=ex>x?ex:x;
        ex=x+ar[i];
        x=nex;
    }
    return (nex>ex?nex:ex);
}
int main()
{
    int ar[]={3,6,5,20,-40};
    int s=sizeof(ar)/sizeof(ar[0]);
    printf("maximum..=%d",maxSum(ar,s));
    return 0;
}
