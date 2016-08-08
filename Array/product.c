#include<stdio.h>
#include<malloc.h>
void prod(int ar[],int len)
{
    int i,temp=1;
    int *pro=(int *)malloc(sizeof(int)*len);
    memset(pro,i,len);
    /*for(i=0;i<len;i++)
        pro[i]=1;*/
    for(i=0;i<len;i++)
    {
        pro[i]=temp;
        temp *=ar[i];
    }
    temp=1;
    for(i=len-1;i>=0;i--)
    {
        pro[i] *=temp;
        temp *=ar[i];
    }
    for(i=0;i<len;i++)
        printf("%d\t",pro[i]);
}
int main()
{
    int ar[]={2,4,6,10,8};
    int len=sizeof(ar)/sizeof(ar[0]);
    prod(ar,len);
    return 0;
}
