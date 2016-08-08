#include<stdio.h>
#include<malloc.h>
int main()
{
    int *a,i,n,k;
    printf("enter the size of vector..\n");
    scanf("%d",&n);
    int b[n-1];
    printf("enter the elements..\n");
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    k=a[0];
    for(i=1;i<n;i++)
    {
        if(k<a[i])
            k=a[i];
    }
    //printf("%d\n",k);
    count(a,b,n,k=k+1);
    for(i=1;i<=n;i++)
        printf("%d\t",b[i]);
        return 0;
}
int count(int a[],int b[],int n,int k)
{
    int c[k],i,j;
    for(j=0;j<k;j++)
        c[j]=0;
    for(i=0;i<n;i++)
        c[a[i]]=c[a[i]]+1;
    for(j=1;j<k;j++)
        c[j]+=c[j-1];
    for(i=n-1;i>=0;i--)
    {
        b[c[a[i]]]=a[i];
        c[a[i]]=c[a[i]]-1;
    }
}
