#include<stdio.h>
int find_element(int arr[],int si,int po)
{
  int pivot=partion(arr,0,si-1);
  if(pivot==-1)
    return find_element(arr,0,);
}
int main()
{
    int arr[]={3,4,5,1,2};
    int arr_size=sizeof(arr)/arr[0];
    printf("index of the pivot %d"find_element(arr,arr_size,5));
    return 0;
}
