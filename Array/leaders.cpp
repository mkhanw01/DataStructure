#include<stdio.h>
void leader(int ar[],int n)
{
    int mxi=ar[n-1];
     printf("%d\t",mxi);
    for(int i=n-2;i>=0;i--)
    {
        if(mxi<ar[i])
        {
            mxi=ar[i];
            printf("%d\t",mxi);
        }
    }
}
int main()
{
    int ar[]={16,17,4,3,5,2};
    int s=sizeof(ar)/sizeof(ar[0]);
    leader(ar,s);
    return 0;
}
