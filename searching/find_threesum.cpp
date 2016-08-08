#include<stdio.h>
#include<algorithm>
#include<malloc.h>
using namespace std;
int main()
{
    int *a,n,i,k,j,data;
    printf("enter the size of array..\n");
    scanf("%d",&n);
    printf("enter the data..\n");
    scanf("%d",&data);
    printf("enter the elements..\n");
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(k=0;k<n;k++)
    {
        for(i=k+1,j=n-1;i<j;)
        {
            if(a[i]+a[j]+a[k]==data)
            {
                printf("Items are %d %d %d",a[i],a[j],a[k]);
                return 0;
            }
            else if(a[i]+a[j]+a[k]<data)
                i++;
            else
                j--;
        }
    }
        return 0;
}

