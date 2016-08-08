#include<stdio.h>
int swa(int a[],int left,int right)
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
            swa(a,left,right);
     }
     a[low]=a[right];
     a[right]=piv_item;
     return right;
}
int sr(int ar[],int s,int n)
{
  int low=s,high=n;
  int pivot;
  if(high>low)
  {
      pivot=part(ar,low,high);
      sr(ar,low,pivot-1);
      sr(ar,pivot+1,high);
  }
}
void cou(int ar[],int n)
{
    int two[][1];
    int i=0,co=1,k;
    for(int k=0;k<n-1;k++)
    {
       if(ar[k]==ar[k+1])
       co++;
       two[i][0]=ar[k];
       two[i][1]=co;
       i++;co=1;
    }
}
void sort_by(int ar[],int n)
{
    sr(ar,0,n-1);
    cou(ar,n);
}
int main()
{
    int ar[]={2,5,2,8,5,6,8,8};
    int s=sizeof(ar)/sizeof(ar[0]);
    sort_by(ar,s);
    return 0;
}
