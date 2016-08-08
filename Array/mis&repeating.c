#include<stdio.h>
void chek(int ar[],int s)
{
    int i;
    printf("repeating elements...");
    for(i=0;i<s;i++)
    {
        if(ar[abs(ar[i])-1]>0)
            ar[abs(ar[i])-1]=-ar[abs(ar[i])-1];
        else
            printf("%d \n",abs(ar[i]));
    }
    printf("missing number is ");
    for(i=0;i<s;i++)
    {
        if(ar[i]>0)
            printf("%d",i+1);
    }
}
int main()
{
    int ar[]= {7, 3, 4, 5, 5, 6, 2};
    int l=sizeof(ar)/sizeof(ar[0]);
    chek(ar,l);
    return 0;
}
