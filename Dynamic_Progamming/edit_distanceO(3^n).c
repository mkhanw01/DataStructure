#include<stdio.h>
#include<string.h>
int min(int x, int y, int z)
{
   return ((x>y)>z?((x>y)?x:y):z);
}

int des(int x,int y,int m,int n)
{
    if(m==0)return n;
    if(n==0)return m;
    if(x[m-1]==y[n-1])
        return des(x,y,m-1,n-1);
    return 1+min(des(x,y,m,n-1),
                 des(x,y,m-1,n),
                 des(x,y,m-1,n-1)
                 );
}
int main()
{
    int x[]={'s','u','n','d','a','y'};
    int y[]={'s','a','t','u','r','d','a','y'};
    printf("minimum destance is =%d",des(x,y,strlen(x),strlen(y)));
    return 0;
}
