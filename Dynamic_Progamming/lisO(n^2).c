#include<stdio.h>
#include<stdlib.h>
int LIS(int ar[],int n)
{
    int *l,i,j;
   // l=(int *)malloc(sizeof(int) *n));
    l= (int*) malloc ( sizeof( int ) * n );
    for(i=0;i<n;i++)
        l[i]=1;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(ar[i]>ar[j]&&l[i]<l[j]+1)
            {
                l[i]=l[j]+1;
            }
        }
    }
   int max=l[0];
    for(i=1;i<n;i++)
    {
        if(l[i]>max)
            max=l[i];
    }
    free(l);
    return max;

}
int main()
{
    int ar[]={10,22,9,33,21,50,41,60,80};
    int n=sizeof(ar)/sizeof(ar[0]);
    printf("lIS length is %d",LIS(ar,n));
    return 0;
}
