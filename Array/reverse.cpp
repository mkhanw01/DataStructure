#include<stdio.h>
void print(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void rev(int arr[],int n)
{
    print(arr,n);
    int sa=0;
    int la=n;
    while(sa<la)
    {
        arr[sa]^=arr[la];
        arr[la]^=arr[sa];
        arr[sa]^=arr[la];
        la--;sa++;
    }
    print(arr,n);
}
int main()
{
    int arr[]={20,30,40,100,0,5,10,80};
    int siz=sizeof(arr)/sizeof(arr[0]);
    rev(arr,siz-1);
    return 0;
}

