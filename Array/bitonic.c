#include<stdio.h>
int bitonic(int arr[],int n)
{
    int inc[n],de[n],i;
    inc[0]=1,de[n-1]=1;
    for(i=1;i<n;i++)
        inc[i]=arr[i]>arr[i-1]?inc[i-1]+1:1;
    for(i=n-1;i>=0;i--)
        de[i]=arr[i]>arr[i+1]?de[i+1]+1:1;
    int max=inc[0]+de[0]-1;
    for(i=1;i<n;i++)
        max=inc[i]+de[i]-1>max?inc[i]+de[i]-1:max;
        return max;
}
int main()
{
    int arr[]={12,4,78,90,45,23};
    int le=sizeof(arr)/sizeof(arr[0]);
    printf("max is %d",bitonic(arr,le));
    return 0;
}
