#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the number....");
    scanf("%d",&n);
    if(n<0)
        return -1;
    for(i=5;n/i>0;i*=5)
        count+=n/i;
    printf("no of zeros...=%d",count);
    return 0;
}
