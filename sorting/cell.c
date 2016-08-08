#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
    int *a,i,n,incr,k,j;
    printf("enter the vectore size..\n");
    scanf("%d",&n);
    printf("enter the incr length..\n");
    scanf("%d",&incr);
    a=(int *)malloc(n*sizeof(int));
    printf("enter the elements..\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        while(incr>=1)
        {
           for(i=incr;i<n;i++)
           {
               k=a[i];
               for(j=i-incr;j>=0&&k<a[j];j-=incr)
                a[j+incr]=a[j];
               a[j+incr]=k;
           }
           incr-=2;
        }
    printf("after the sort..\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
