#include<stdio.h>
#include<algorithm>
#include<limits.h>
using namespace std;
void  sumabs(int ar[],int len)
{
    int le=0,min_l,min_r;
    int min_sum=INT_MAX,sum;
    int re=len-1;
    while(le<re)
    {
      sum=ar[le]+ar[re];
      if(abs(sum)<abs(min_sum))
      {
          min_sum=sum;
          min_l=le;
          min_r=re;
      }
      if(sum<0)
        le++;
      else
        re--;
    }
  printf("numbers are %d and %d",ar[min_l],ar[min_r]);
}
int main()
{
    int ar[]={1,60,-10,70,-80,85};
    int len=sizeof(ar)/sizeof(ar[0]);
    printf("%d",len);
    sort(ar,ar+len);
    sumabs(ar,len);
    return 0;
}

