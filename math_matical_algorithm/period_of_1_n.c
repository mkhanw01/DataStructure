#include<stdio.h>
int getperiod(int n)
{
    int d,i,count=0,rem=1;
    for(i=1;i<=n+1;i++)
        rem=(rem*10)%n;
    d=rem;
    do{
        rem=(rem*10)%n;
        count++;
    }while(rem!=d);
    return count;
}
int main()
{
    int n;
    printf("enter the number to find the period of 1/n ..\n");
    scanf("%d",&n);
    printf("the period of 1/%d is=%d",n,getperiod(n));
    return 0;
}
