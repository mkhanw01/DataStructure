#include<stdio.h>
void print_dup(int ar[],int l)
{
    int i,xo=0;
    for(i=0;i<l;i++)
        xo=!(xo^ar[i]);
       // printf("%d\t",xo);
        //if(xo==ar[i]);
            printf("%d\t",xo);
}
int main()
{
    int ar[]={4,2,4,5,2,3,1,3,7,1};
    int len=sizeof(ar)/sizeof(ar[0]);
    print_dup(ar,len);
    return 0;
}
