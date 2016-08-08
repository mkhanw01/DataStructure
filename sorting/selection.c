
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
        select(a,n);
    printf("after the sort..\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
int select(int a[],int n)
{
    int i,j,temp,min;
for(i=0;i<n-1;i++)
{
    min=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[min])
            min=j;
    }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
}
}
