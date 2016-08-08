#include<stdio.h>
#include<malloc.h>
int sear(int a[],int item,int n)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]==item)
        return (i+1);
    return 0;
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
