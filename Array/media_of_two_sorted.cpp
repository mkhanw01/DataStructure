#include<stdio.h>
int median(int ar1[],int ar2[],int n1,int n2)
{
    if(n<1)
        return -1;
    int m1,m2;
    if(n==1)
        return(ar1[0]+ar2[0])/2;
    if(n==2)
        return(ma(ar1[0],ar2[0])+mi(ar1[1],ar2[1]));
    m1=getmedian(ar1,n);
    m2=getmedian(ar2,n);
    if(m1=m2)
        return m1;
    if(m1<m2)
    {
        if(n%2==0)
         median(ar1+n/2-1,ar2,n-n/2+1);
         else
         median(ar1+n/2,ar2,n-n/2);
    }
    else
    {
        if(n%2==0)
         median(ar2+n/2-1,ar1,n-n/2+1);
         else
         median(ar2+n/2,ar1,n-n/2);
    }



    }


}
int main()
{
    int ar1[]={1,2,3,6};
    int ar2[]={4,6,8,10};
    int n1=sizeof(ar1)/sizeof(ar1[0]);
    int n2=sizeof(ar2)/sizeof(ar2[0]);
    if(n1==n2)
        printf("median is %d",median(ar1,ar2,n1));
    else
        printf("median is not posssible...");
    return 0;
}
