#include<stdio.h>
int gcd(int i,int n)
{
    if(i==0)
        return n;
    else
        return gcd(n%i,i);
}
int phi(int n)
{
    int i,result=1;
    for(i=2;i<n;i++)
        if(gcd(i,n)==1)
            result++;
    return result;
}
int main()
{
    int n;
    for(n=1;n<10;n++)
       printf("phi(%d) =%d\n",n,phi(n));
    return 0;
}
