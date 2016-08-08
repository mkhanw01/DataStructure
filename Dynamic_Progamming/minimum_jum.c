#include<stdio.h>
#include<limits.h>
int minim(int ar[],int n)
{
    int ac[n],no[n];
    no[0]=0,ac[0]=-1;
    if(n==0||ar[0]==0)
        return INT_MAX;
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(i<=ar[j]+j)

            }
        }
}
int main()
{
    int ar[]={1, 3, 6, 1, 0, 9};
    int n=sizeof(ar)/sizeof(ar[0]);
    printf("minimum jump = %d",minim(ar,n));
    return 0;
}
