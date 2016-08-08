#include<stdio.h>
#include<malloc.h>
int main()
{
    int *a,i,n,x=0,y=0;
    printf("enter the size of vectore..");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("enter the elements..\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int xr=a[0],rmbit;
    for(i=1;i<n;i++)
        xr^=a[i];
    for(i=1;i<=5;i++)
        xr^=i;
        printf("\n value of xr =%d",xr);
    rmbit=xr^~(xr-1);
    printf("the value of rmbit..=%d",rmbit);
    for(i=0;i<n;i++)
    {
        if(a[i]&rmbit)
        x^=a[i];
        else
        y^=a[i];
    }
    for(i=1;i<=5;i++)
    {
        if(i&rmbit)
            x^=i;
        else
            y^=i;
    }
    printf("\n %d and %d",x,y);
    return 0;
}
