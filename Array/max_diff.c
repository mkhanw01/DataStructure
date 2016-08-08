#include<stdio.h>
int sum_dif(int ar[],int len)
{
    int i,dif=ar[1]-ar[0];
    int cur_dif=dif;
    int max_dif=cur_dif;
    for(i=1;i<len-1;i++)
    {
        dif=ar[i+1]-ar[i];
        if(cur_dif>0)
            cur_dif +=dif;
        else
            cur_dif=dif;
        if(max_dif<cur_dif)
            max_dif=cur_dif;
    }
    return max_dif;
}
int main()
{
    int ar[]={5,2,9,11,6,15,7};
    int len=sizeof(ar)/sizeof(ar[0]);
    printf("%d",sum_dif(ar,len));
    return 0;
}
