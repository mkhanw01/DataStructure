#include<stdio.h>
int po(int n,unsigned long int y)
{
    unsigned long long int res=1;
    while(y)
    {
        if(y%2==0)
        {
            y/=2;
            n*=n;
        }
        else
        {
            y--;
            res*=n;
        }
    }
    return res;
}
int main()
{
    int n;
    unsigned long int y;
    printf("enter the value of n and y\n");
    scanf("%d%u",&n,&y);
    printf("%lllu",po(n,y));
    return 0;
}
