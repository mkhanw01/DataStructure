#include<stdio.h>
#include<malloc.h>
int bsea(int a[],int low,int high,int item)
{
   int mid=low+(high-low)/2;
    if(item==a[mid])
    {
        return (mid+1);
    }
    else if(item<a[mid])
    {
            high=mid;
           return (bsea(a,low,high,item));
    }
        else if(item>a[mid])
        {
            low=mid;
           return (bsea(a,low,high,item));
        }
        else return -1;

}
int main()
{
    int *a,item,n,i;
    printf("enter how many no u want\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("enter the elements..\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("which elements u wants to search.. ");
    scanf("%d",&item);
    item=bsea(a,0,n,item);
    if(item==0)
        printf("item not founds..");
    else
        printf("item founds.. %d",item);
    return 0;
}
