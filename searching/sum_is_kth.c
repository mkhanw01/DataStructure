#include<stdio.h>
#include<malloc.h>
int main()
{
    int *a,i,n,j,k,temp;
    printf("enter the vector size..\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("enter the elements...\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("enter the k value..\n");
        scanf("%d",&k);
    quick(a,0,n-1);
    for(i=0,j=n-1;i<j;)
    {
        temp=a[i]+a[j];
        if(temp==k)
        {
            printf("\n elements founds..=(%d , %d)",a[i],a[j]);
            if(a[i]<a[i+1] && a[j]>a[j-1])
            {
              i=i+1;
              j=j-1;
            }
            else if(a[i]<a[i+1])
                i=i+1;
            else
                j=j-1;
        }
        else if(temp<k)
        i=i+1;
        else
            j=j-1;
    }
        return 0;
}
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
int quick(int a[],int low,int high)
{
  int pivot;
  if(high>low)
  {
      pivot=part(a,low,high);
      quick(a,low,pivot-1);
      quick(a,pivot+1,high);
  }
}


