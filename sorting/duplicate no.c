
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
    int *a,i,n,j;
    printf("enter the vectore size..\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("enter the elements..\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
                if(a[i]!=a[j])
                continue;
                else
                    break;
        }
        printf("duplicate no is= %d",a[i]);
    return 0;
}
