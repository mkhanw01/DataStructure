#include<stdio.h>
#include<limits.h>
using namespace std;
int minim(int ar[],int n)
{
    int *jump=new int[n];
    int i,j;
    if(n==0 ||ar[0]==0)
        return INT_MAX;
        jump[0]=0;
    for(i=1;i<n;i++)
    {
        jump[i]=INT_MAX;
        for(j=0;j<i;j++)
        {
            if(i<=j+ar[j]&&jump[j]!=INT_MAX)
            {
                jump[i]=jump[i]>(jump[j]+1)?jump[i]:(jump[j]+1);
                break;
            }
        }
    }
    return jump[n-1];
}
int main()
{
    int ar[]={1, 3, 6, 1, 0, 9};
    int n=sizeof(ar)/sizeof(ar[0]);
    printf("minimum jump = %d",minim(ar,n));
    return 0;

}
