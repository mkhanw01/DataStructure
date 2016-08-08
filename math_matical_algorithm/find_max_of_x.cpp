#include<stdio.h>
using namespace std;
int largest(int n,int p)
{
    int x=0;
    while(n)
    {
        n/=p;
        x+=n;
    }
    return x;
}
int main()
{
    int n,p;
    scanf("%d%d",&n,&p);
    int x=largest(n,p);
    printf("x=%d",x);
    return 0;
}
