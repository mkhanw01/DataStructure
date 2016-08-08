#include<stdio.h>
int max(int f,int e)
{
    return (f>e?f:e);
}
int max_sub(int a[],int siz)
{
    int max_f=a[0],i,cur_max=a[0];
    for(i=1;i<siz;i++)
    {
        cur_max=max(a[i],cur_max+a[i]);
        max_f=max(max_f,cur_max);
    }
    return max_f;
}
int main()
{
    int a[]={1,-2,4,-8,10,1,-7,3,7};
    int len=sizeof(a)/sizeof(a[0]);
    int max=max_sub(a,len);
    printf("maximum sub array %d",max);
    return 0;
}
