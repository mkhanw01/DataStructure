#include<stdio.h>
int getodd(int a[],int si)
{
    int res=0;
    for(int i=0;i<si;i++)
        res=res^a[i];
    return res;
}
int main()
{
    int arr[]={2,3,5,4,5,2,4,3,5,2,4,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",getodd(arr,n));
    return 0;
}
