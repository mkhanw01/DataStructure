#include<stdio.h>
int max(int ar[],int l,int hi)
{
    if(l==hi)
        return ar[l];
    int mid=(l+hi)/2;
    if(ar[mid]>ar[mid-1]&&ar[mid]>ar[mid+1])
        return ar[mid];
    if(ar[mid]>ar[mid+1]&&ar[mid]<ar[mid-1])
        return max(ar,l,mid-1);
    else
        return max(ar,mid+1,hi);
}
int main()
{
    int arr[]={10, 20};
    int le=sizeof(arr)/sizeof(arr[0]);
    printf("max element %d",max(arr,0,le));
    return 0;
}

