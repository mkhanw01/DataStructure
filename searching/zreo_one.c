#include<stdio.h>
#include<malloc.h>
int main()
{
    int *a,l,r,n;
    printf("enter the size..\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("enter the elements..\n");
    for(l=0;l<n;l++)
        scanf("%d",&a[l]);
        l=0;r=n-1;
    while(l<r)
    {
        while(a[l]==0&&l<r)
            l++;
        while(a[r]==1&&l<r)
            r--;
        if(l<r)
        {

            a[l]=0;
            a[r]=1;
            l++;
            r--;
        }
    }
    printf("after the arranging....\n");
    for(l=0;l<n;l++)
        printf("%d\t",a[l]);
    return 0;
}
