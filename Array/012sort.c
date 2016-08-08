#include<stdio.h>
void print(int ar[],int l)
{
    int i;
    for(i=0;i<l;i++)
        printf("%d\t",ar[i]);
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void one(int ar[],int le)
{
    int l=0,m=0,hi=le-1;
    while(m<=hi)
    {
        switch(ar[m])
        {
        case 0:
            swap(&ar[l],&ar[m]);
            l++,m++;
            break;
        case 1:
            m++;
            break;
        case 2:
            swap(&ar[m],&ar[hi]);
            hi--;
            break;
        }

    }
}
int main()
{
    int ar[]={0,1,1,0,1,2,1,2,0,0,0,1};
    int le=sizeof(ar)/sizeof(ar[0]);
    one(ar,le);
    print(ar,le);
    return 0;
}
