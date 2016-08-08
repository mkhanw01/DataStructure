#include<stdio.h>
#include<limits.h>
int main()
{
    int ar[]={30,40,20,-2,24,2,33,-5,0};
    int si=sizeof(ar)/sizeof(ar[0]);
    int first,second=INT_MAX;
    first=second;
    for(int i=0;i<si;i++)
    {
        if(ar[i]<first)
        {
            second=first;
            first=ar[i];
        }
        else if(ar[i]<second&&first!=ar[i])
        {
            second=ar[i];
        }
    }
    printf("first is=%d and second is=%d",first,second);
    return 0;
}
