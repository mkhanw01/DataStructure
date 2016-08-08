#include<stdio.h>
void print(int ar[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d\t",ar[i]);
    printf("\n");
}
void rev(int ar[],int st,int en)
{
 while(st<en)
 {
   ar[st]^=ar[en];
   ar[en]^=ar[st];
   ar[st]^=ar[en];
   st++;en--;
 }
}
void rotat(int ar[],int s,int d)
{
    print(ar,s);
    rev(ar,0,d-1);
    rev(ar,d,s-1);
    rev(ar,0,s-1);
    print(ar,s);
}
int main()
{
    int ar[]={1,2,3,4,5,6,7};
    int s=sizeof(ar)/sizeof(ar[0]);
    rotat(ar,s,3);
    return 0;
}
