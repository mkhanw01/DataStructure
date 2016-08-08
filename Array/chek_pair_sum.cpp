#include<stdio.h>
int swap(int a[],int left,int right)
{
    int temp;
    temp=a[left];
    a[left]=a[right];
    a[right]=temp;
}
int part(int a[],int low,int high)
{
     int piv_item=a[low];
     int left=low;
     int right=high;
     while(left<right)
     {
         while(a[left]<=piv_item)
            left++;
         while(a[right]>piv_item)
            right--;
         if(left<right)
            swap(a,left,right);
     }
     a[low]=a[right];
     a[right]=piv_item;
     return right;
}
int quicksort(int a[],int low,int high)
{
  int pivot;
  if(high>low)
  {
      pivot=part(a,low,high);
      quicksort(a,low,pivot-1);
      quicksort(a,pivot+1,high);
  }
}
int cheksum(int a[],int siz,int sum)
{
    int l,r;
    l=0;
    r=siz-1;
    quicksort(a,0,siz-1);
    while(l<r)
    {
        if(a[l]+a[r]==sum)
            return 1;
        else if(a[l]+a[r]<sum)
            l++;
        else
            r--;
    }
    return 0;
}
int main()
{
int a[]={1,4,45,6,10,-8};
int sum=16;
int siz=6;
if(cheksum(a,siz,sum))
    printf("sum is exixt..");
else
    printf("summ is not exixt");
return 0;
}
