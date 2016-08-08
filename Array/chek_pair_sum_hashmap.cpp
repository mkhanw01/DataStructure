#include<stdio.h>
#define MAX 1000
void printpair(int arr[],int siz,int sum)
{
    int i,temp;
    int bitmap[MAX]={0};
    for(i=0;i<siz;i++)
    {
        temp=sum-arr[i];
        if(temp>0 && bitmap[temp]==1)
        {
            printf("the number found (%d %d)",arr[i],temp);
        }
        bitmap[arr[i]]=1;
    }
}
int main()
{
    int arr[]={1,4,45,6,10,8};
    int arr_size=6;
    int n=16;
    printpair(arr,arr_size,n);
    return 0;
}
