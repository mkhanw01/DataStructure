#include<stdio.h>
#include<stdlib.h>
int index(int ar[],int l,int r,int key)
{
    while(r-l>1)
    {
        int m=l+(r-1)/2;
        if(ar[m]>=key)
            r=m;
        else
            l=m;
    }
    return r;
}
int LIS(int ar[],int n)
{
    int *temp=(int *)malloc(sizeof(ar[0])*n);
    int i,len;
    for(i=0;i<n;i++)
        temp[i]=0;
    len=1;
    for(i=1;i<n;i++)
    {
        if(ar[i]<temp[0])
            temp[0]=ar[i];
        else if(ar[i]>temp[len-1])
            temp[len++]=ar[i];
        else
            temp[index(ar,-1,len-1,ar[i])]=ar[i];
    }
    for(i=0;i<len;i++)
        printf("%d\t",temp[i]);
    free(temp);
    return len;
}
int main()
{
     int ar[]={ 2, 5, 3, 7, 11, 8, 10, 13, 6 };
     int n=sizeof(ar)/sizeof(ar[0]);
     printf("\n size of lis= %d",LIS(ar,n));
     return 0;
}
