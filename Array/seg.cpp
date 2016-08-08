#include<stdio.h>
using namespace std;
void pr(int arr[],int len)
{
    for(int i=0;i<len;i++)
        printf("%d ",arr[i]);
}
void seg(int ar[],int si)
{
    int l=0,r=si;
    while(l<r)
    {
        while(ar[l]==0 && l<r)
            l++;
        while(ar[r]==1 && l<r)
            r--;
        if(l<r)
        {
            ar[l]=0;
            ar[r]=1;
            l++,r--;
        }
    }
    pr(ar,si+1);
}
int main()
{
    int ar[]={1,0,0,1,1,0,0,1,1,0,0,1};
    int len=sizeof(ar)/sizeof(ar[0]);
    return 0;
}

