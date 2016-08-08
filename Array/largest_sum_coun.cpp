#include<stdio.h>
int getsum(int a[],int n)
{
    int ma_for=0,ma_end=0;
    for(int i=0;i<n;i++)
    {
        ma_end+=a[i];
        if(ma_end<0)
            ma_end=0;
        if(ma_for<ma_end)
            ma_for=ma_end;
    }
    return ma_for;
}
int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",getsum(arr,n));
    return 0;
}
