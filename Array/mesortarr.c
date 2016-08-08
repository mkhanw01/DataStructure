#include<stdio.h>
int max(int a,int b)
{
    return (a>b?a:b);
}
int min(int a,int b)
{
    return (a>b?b:a);
}
int median(int s[],int n)
{
    return (n%2==0?(s[n/2]+s[n/2-1]):(s[n/2]));
}
int getmedian(int a[],int b[],int n)
{
   // if(n<0)
     //   return -1;
    if(n==1)
        return (a[0]+b[0])/2;

    if(n==2)
        return (max(a[0],b[0])+min(a[1],b[1]))/2;
        int m1=median(a,n);
        int m2=median(b,n);
        if(m1==m2)
            return m1;
        if(m1<m2)
          return(n%2==0?getmedian(a+n/2-1,b,n-n/2+1):getmedian(a+n/2,b,n-n/2));
        else
            return(n%2==0?getmedian(b+n/2-1,a,n-n/2-1):getmedian(b+n/2,a,n-n/2));

}
int main()
{
    int a[]={-1,0,15,19,27,31};
    int b[]={20,30,40,43,49,70};
    int len_a=sizeof(a)/sizeof(a[0]);
    int len_b=sizeof(b)/sizeof(b[0]);
    len_a==len_b?printf("median of both array %d",getmedian(a,b,len_a)):printf("aize of both array not same");
   return 0;
}
