#include<stdio.h>
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
void rotat(int arr[],int n,int d)
{
       print(arr,n);
    int i,k,j,temp;
    for(i=0;i<gcd(n,d);i++)
    {
        temp=arr[i];
        j=i;
        while(1)
        {
            k=j+d;
            if(k>=n)
                k=k-n;
            if(i==k)
                break;
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
    print(arr,n);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int siz=sizeof(arr)/sizeof(arr[0]);
    rotat(arr,siz,3);
    return 0;
}

