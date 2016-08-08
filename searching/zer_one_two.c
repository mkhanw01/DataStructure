#include<stdio.h>
#include<malloc.h>
int main()
{
    int *a,l,m,h,n,temp;
    pritnf("enter the size..\n");
    scanf("%d",&n);
    pritnf("enter the elements...\n");
    a=(int *)malloc(n*sizeof(int));
    for(l=0;l<n;l++)
        scanf("%d",&a[l]);
    l=m=0;h=n-1;
    while(m<=h)
    {
        switch(a[m])
        {
        case 0:
               temp=a[l];
               a[l]=a[m];
               a[m]=temp;
               l++;m++;
               break;
        case 1:
               m++;
               break;
        case 2:
               h--;
               break;
        }
    }
    for(l=0;l<n;l++)
        printf("%d\t",a[l]);
    return 0;
}
