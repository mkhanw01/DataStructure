#include<stdio.h>
int main()
{
    int i,sum=0,k,miss,n;
    printf("enter the size of vectore..");
    scanf("%d",&n);
    k=n*(n+1)/2;
    n=n-1;
    int a[n];
    printf("enter the elements.of (n-1) times..\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum+=a[i];
        miss=k-sum;
        printf("the missimg number is..=%d",miss);
        return 0;
}
