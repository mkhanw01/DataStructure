#include<stdio.h>
#include<stdlib.h>
void dup(int ar[],int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        if(ar[abs(ar[i])]>=0)
          ar[abs(ar[i])]= -ar[abs(ar[i])];
        //printf("%d\t",ar[abs(ar[i])]);
        else
          printf("%d\t",abs(ar[i]));

    }
}
int main()
{
    int arr[]={1,2,3,1,3,6,6};
    int le=sizeof(arr)/sizeof(arr[0]);
    dup(arr,le);
    return 0;
}
