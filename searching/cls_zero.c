#include<stdio.h>
#include<malloc.h>
int main()
{
    int *a,min_i,min_j,i,j,min_sum,sum,n;
    printf("enter the vectore size..\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("enter the elements..\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min_sum=a[0]+a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            if(abs(min_sum)>abs(sum))
            {
                min_sum=sum;
                min_i=i;
                min_j=j;
            }
        }
    }
    printf("the number are  %d and %d",a[min_i],a[min_j]);
    return 0;
}
