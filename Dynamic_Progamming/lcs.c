#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int x,int y)
{
    return (x>y?x:y);
}
int lcs(char *x,char *y,int n,int m)
{
    if(n==0 || m==0)
        return 0;
    if(x[n-1]==y[m-1])
        return 1+lcs(x,y,n-1,m-1);
   else
        return max(lcs(x,y,n,m-1),lcs(x,y,n-1,m));
}
int main()
{
    char ch[]="AGGTAB";
    char ch2[]="GXTXAYB";
    int n1=strlen(ch);
    int n2=strlen(ch2);
    printf("length %d",lcs(ch,ch2,n1,n2));
    return 0;
}
