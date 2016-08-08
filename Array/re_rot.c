#include<stdio.h>
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}
void rotate(int a[],int st,int en)
{
    while(st<en)
    {
        a[st]^=a[en];
        a[en]^=a[st];
        a[st]^=a[en];
        st++,en--;
    }
}
void rev(int a[],int d,int n)
{
    rotate(a,0,d-1);
    rotate(a,d,n-1);
    rotate(a,0,n-1);
}
int main()
{
    int a[]={1,2,3,4,5,6,9,7};
    int d=3;
    int len=sizeof(a)/sizeof(a[0]);
    print(a,len);
    rev(a,d,len);
    print(a,len);
    return 0;
}
