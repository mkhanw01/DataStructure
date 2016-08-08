#include<stdio.h>
#include<malloc.h>
int sear(int a[],int item,int n)
{
    if(n<0)
        return -1;
        if(item==a[n-1])
        return n;
    return sear(a,item,n-1);
}
int main()
{
    int *a,n,item,i;
    printf("how many eleme u wants..\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("enter the elements..");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("item to search..");
        scanf("%d",&item);
     item=sear(a,item,n);
     if(item==0)
        printf("not found");
     else
        printf("item found a position %d",item);
return 0;
}
