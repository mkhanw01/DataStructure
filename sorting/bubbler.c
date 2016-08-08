#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
    int *a,i,n;
    printf("enter the vectore size..\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("enter the elements..\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        bubble(a,n);
    printf("after the sort..\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
int bubble(int a[],int n)
{
    int i,j,swap=1;
     for(i=n-1;i>0 && swap;i--)
    {
        swap=0;
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
                swap=1;
            }
        }
    }
}
