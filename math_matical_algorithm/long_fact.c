#include<stdio.h>
int mull(int x,int res[],int res_size)
{
    int carry=0;
    int i,prod;
    for(i=0;i<res_size;i++)
    {
        prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}
void fact(int n)
{
    int res[99999];
    int res_size=1;
    res[0]=1;
    int x,i;
    for(x=2;x<=n;x++)
        res_size=mull(x,res,res_size);
        for(i=res_size-1;i>=0;i--)
            printf("%d",res[i]);
}
int main()
{
    int n;
    printf("enter the number to evaluate big factorial..\n");
    scanf("%d",&n);
    fact(n);
    return 0;
}
