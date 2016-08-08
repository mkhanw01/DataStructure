#include<stdio.h>
int mis(int a[],int len)
{
    int x1=a[0],x2=1,i;
    for(i=1;i<len;i++)
        x1^=a[i];
    for(i=2;i<=len+1;i++)
        x2^=i;
    return (x1^x2);
}
int main()
{
    int a[]={3,4,6,1,2};
    int len=sizeof(a)/sizeof(a[0]);
    printf("missing number is %d",mis(a,len));
    return 0;
}
