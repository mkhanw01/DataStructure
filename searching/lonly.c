#include<stdio.h>
#include<malloc.h>
int main()
{
    int *a,n,i,res;
    printf("enter the size..");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int ));
    printf("enter the elements..");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=res=0;i<n;i++)
        res=res^a[i];
    printf("the lonly integr is =%d",res);
    return 0;
}
