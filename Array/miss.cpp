#include<stdio.h>
int miss(int a[],int s)
{
    int temp=(s+1)*(s+2)/2;
    for(int i=0;i<s;i++)
        temp-=a[i];
    return temp;
}
int main()
{
    int arr[]={1,2,4,5,6};
    printf("miss no is %d",miss(arr,5));
    return 0;
}
