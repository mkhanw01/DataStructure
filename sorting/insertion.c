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
        insert(a,n);
    printf("after the sort..\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
int insert(int a[],int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k=a[i];
        for(j=i-1;j>=0 && k<a[j];j--)
        a[j+1]=a[j];
        a[j+1]=k;

    }

}
