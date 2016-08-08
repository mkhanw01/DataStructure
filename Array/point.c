#include<stdio.h>
int point(int arr[],int lo,int hi)
{
    if(hi>=lo)
    {
        int mid=(lo+hi)/2;
        if(arr[mid]==mid)
            return mid;
        if(arr[mid]>mid)
        return point(arr,lo,mid-1);
        else
            return point(arr,mid+1,hi);
    }
    return  -1;
}
int main()
{
    int arr[]={-20,-1,3,7,9,20};
    int le=sizeof(arr)/sizeof(arr[0]);
    printf("%d",point(arr,0,le-1));
    return 0;

}
